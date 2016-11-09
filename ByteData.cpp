// ByteData.cpp: implementation of the CByteData class.
//
//////////////////////////////////////////////////////////////////////

#include "stdafx.h"
#include "TeachC.h"
#include "ByteData.h"

#ifdef _DEBUG
#undef THIS_FILE
static char THIS_FILE[]=__FILE__;
#define new DEBUG_NEW
#endif

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

CByteData::CByteData()
{
	InitByteData();
}

CByteData::~CByteData()
{

}

void CByteData::SetTrue(int n, BOOL bData)
{
	bTrue[n] = bData;
}

void CByteData::SetNeg(int n, BOOL bData)
{
	bNeg[n] = bData;
}

void CByteData::SetCom(int n, BOOL bData)
{
	bCom[n] = bData;
}

void CByteData::SetUcData(UCHAR uTmp)
{
	ucData = uTmp;
}

void CByteData::SetcData(UCHAR cTmp)
{
	cData = cTmp;
}

void CByteData::SetStrHex(CString strHex)
{
	this->strHex = strHex;
}

void CByteData::SetStrDec(CString strDec)
{
	this->strDec = strDec;
}

void CByteData::SetFlag(BOOL flag)
{
	this->bFlag = flag;
}

BOOL CByteData::GetFlag()
{
	return bFlag;
}

BOOL CByteData::GetTrue(int n)
{
	return bTrue[n];
}

BOOL CByteData::GetNeg(int n)
{
	return bNeg[n];
}

BOOL CByteData::GetCom(int n)
{
	return bCom[n];
}

char CByteData::GetCData()
{
	return cData;
}

UCHAR CByteData::GetUcData()
{
	return ucData;
}

CString CByteData::GetStrHex()
{
	return strHex;
}

CString CByteData::GetStrDec()
{
	return strDec;
}

void CByteData::InitByteData()
{
	int i;
	for (i = 0 ; i < BYTE_LEN; i ++)
	{
		SetTrue(i,TRUE);
		SetNeg(i,TRUE);
		SetCom(i,TRUE);
	}
	SetcData(-127);
	SetUcData(255);
	SetStrDec("255");
	SetStrHex("FF");
	SetFlag(FALSE);
}

void CByteData::ProcByteData()
{
	int i;
	UCHAR tmp = 0;
	char uTmp = 0;
	for (i = 0 ; i < BYTE_LEN; i++)
	{
		if (bTrue[i] == TRUE)
		{
			tmp |= (1 << i);
		}
	}
	ucData = tmp;
	if (bFlag)
	{
		if (bTrue[BYTE_LEN - 1] == TRUE)
		{
			cData = 0;
			for (i = 0 ; i < BYTE_LEN - 1; i++)
			{
				if (bTrue[i] == TRUE)
				{
					cData |= 1 << i;
					bNeg[i] = FALSE;
				} 
				else
				{
					bNeg[i] = TRUE;
					uTmp |= 1 << i;
				}
			}
			if (cData == 0)
			{
				cData = -128;
				strHex = "80";
				strHex = "-" + strHex;		//获得16进制字符串
				strDec.Format("%d",cData);
				//strDec = "-" + strDec;		//获得10进制字符串
			}
			else
			{
				strHex.Format("%02X",cData);
				strHex = "-" + strHex;		//获得16进制字符串
				strDec.Format("%d",cData);
				strDec = "-" + strDec;		//获得10进制字符串
				cData = 0 - cData;			//根据原码得出char类型值得相反数后再求相反数
			}
			
			
			bNeg[BYTE_LEN - 1] = TRUE;
			uTmp++;
			for (i = 0 ; i < BYTE_LEN - 1; i++)
			{
				if (((uTmp & (1 << i)) >> i) == 1)
				{
					bCom[i] = TRUE;
				} 
				else
				{
					bCom[i] = FALSE;
				}
			}
			bCom[BYTE_LEN - 1] = TRUE;
		}
		else
		{
			cData = ucData;
			strHex.Format("%02X",cData);	//获得16进制字符串
			strDec.Format("%d",cData);		//获得10进制字符串
			for (i = 0 ; i < BYTE_LEN; i++)
			{
				if (bTrue[i] == TRUE)
				{
					bNeg[i] = TRUE;
					bCom[i] = TRUE;
				} 
				else
				{
					bNeg[i] = FALSE;
					bCom[i] = FALSE;
				}
			}
		}
	} 
	else
	{
		strHex.Format("%02X",ucData);	//获得16进制字符串
		strDec.Format("%d",ucData);		//获得10进制字符串
		for (i = 0 ; i < BYTE_LEN; i++)
		{
			if (bTrue[i] == TRUE)
			{
				bNeg[i] = TRUE;
				bCom[i] = TRUE;
			} 
			else
			{
				bNeg[i] = FALSE;
				bCom[i] = FALSE;
			}
		}
	}
}

void CByteData::SetBitFromDataC()
{
	int i;
	char ch = 0;
	char tmp = cData;
	if (cData < 0)
	{
		tmp = 0 - cData;
		for (i = 0 ; i < BYTE_LEN - 1; i++)
		{
			if (((tmp & (1 << i)) >> i) == 1)
			{
				bTrue[i] = TRUE;
				bNeg[i] = FALSE;
			}
			else
			{
				bTrue[i] = FALSE;
				bNeg[i] = TRUE;
				ch |= 1 << i;
			}
		}
		bTrue[BYTE_LEN - 1] = TRUE;
		bNeg[BYTE_LEN - 1] = TRUE;
		ch ++;
		for (i = 0 ; i < BYTE_LEN - 1; i ++)
		{
			if (((ch & (1 << i)) >> i) == 1)
			{
				bCom[i] = TRUE;
			} 
			else
			{
				bCom[i] = FALSE;
			}
		}
		bCom[BYTE_LEN - 1] = TRUE;
		if (ch == -128)
		{
			strHex = "80";
			strHex = "-" + strHex;		//获得16进制字符串
			strDec.Format("%d",ch);
			//strDec = "-" + strDec;		//获得10进制字符串
		}
		else
		{
			 strDec.Format("%d",cData);
			 strHex.Format("%02X",tmp);
	 		strHex = "-" + strHex;
		}

	}
	else
	{
		for (i = 0 ; i < BYTE_LEN; i++)
		{
			if (((tmp & (1 << i)) >> i) == 1)
			{
				bTrue[i] = TRUE;
				bNeg[i] = TRUE;
				bCom[i] = TRUE;
			}
			else
			{
				bTrue[i] = FALSE;
				bNeg[i] = FALSE;
				bCom[i] = FALSE;
			}
		}
		strDec.Format("%d",cData);
		strHex.Format("%02X",tmp);
	}
}

void CByteData::SetBitFromDataU()
{
	int i;
	for (i = 0 ; i < BYTE_LEN; i++)
	{
		if (((ucData & (1 << i)) >> i) == 1)
		{
			bTrue[i] = TRUE;
			bNeg[i] = TRUE;
			bCom[i] = TRUE;
		}
		else
		{
			bTrue[i] = FALSE;
			bNeg[i] = FALSE;
			bCom[i] = FALSE;
		}
	}
	strDec.Format("%d",ucData);
	strHex.Format("%02X",ucData);
}
