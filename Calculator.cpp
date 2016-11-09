// Calculator.cpp: implementation of the CCalculator class.
//
//////////////////////////////////////////////////////////////////////

#include "stdafx.h"
#include "TeachC.h"
#include "Calculator.h"
#include "deelx.h"

#ifdef _DEBUG
#undef THIS_FILE
static char THIS_FILE[]=__FILE__;
#define new DEBUG_NEW
#endif

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

CCalculator::CCalculator()
{
	InitOperator();
}

CCalculator::~CCalculator()
{

}

void CCalculator::InitOperator()
{
	int i;
	for (i = 0 ; i < ID_MAX ;i ++)
	{
		m_bOper[i] = FALSE;
	}
}

void CCalculator::SetOper(int n,BOOL oper)
{
	InitOperator();
	m_bOper[n] = oper;
}

BOOL CCalculator::GetWhichOper(int *p)
{
	int i;
	BOOL isOk = TRUE;
	for (i = 0 ; i < ID_MAX; i ++)
	{
		if (m_bOper[i] == TRUE)
		{
			break;
		}
	}
	*p = i;
	return isOk;
}


BOOL CCalculator::ProcUnaryDataC(int n, char *ch, char *res)
{
	BOOL flag = TRUE;
	char tmp = *ch;
	switch (n)
	{
	case ID_OPPSITE:
		tmp = !tmp;
		*res = tmp;
		break;
	case ID_NO:
		tmp = ~tmp;
		*res = tmp;
		break;
	case ID_MAX:
		*res = tmp;
		break;
	default:
		flag = FALSE;
		break;
	}
	return flag;
}

BOOL CCalculator::ProcUnaryDataU(int n, UCHAR *uch, UCHAR *res)
{
	BOOL flag = TRUE;
	UCHAR tmp = *uch;
	switch (n)
	{
	case ID_OPPSITE:
		tmp = !tmp;
		*res = tmp;
		break;
	case ID_NO:
		tmp = ~tmp;
		*res = tmp;
		break;
	case ID_MAX:
		*res = tmp;
		break;
	default:
		flag = FALSE;
		break;
	}
	return flag;
}

BOOL CCalculator::ProcBinDataC(int n, char *ch, char *res)
{
	BOOL flag = TRUE;
	char tmp;
	switch (n)
	{
	case ID_PLUS:
		tmp = ch[0] + ch[1];
		*res = tmp;
		break;
	case ID_MINUS:
		tmp = ch[0] - ch[1];
		*res = tmp;
		break;
	case ID_MUL:
		tmp = ch[0] * ch[1];
		*res = tmp;
		break;
	case ID_DIV:
		tmp = ch[0] / ch[1];
		*res = tmp;
		break;
	case ID_AND:
		tmp = ch[0] & ch[1];
		*res = tmp;
		break;
	case ID_OR:
		tmp = ch[0] | ch[1];
		*res = tmp;
		break;
	case ID_XOR:
		tmp = ch[0] ^ ch[1];
		*res = tmp;
		break;
	case ID_WITH:
		tmp = ch[0] && ch[1];
		*res = tmp;
		break;
	case ID_PERHAPS:
		tmp = ch[0] || ch[1];
		*res = tmp;
		break;
	case ID_EQUAL:
		tmp = ch[0] == ch[1];
		*res = tmp;
		break;
	case ID_NOEQUAL:
		tmp = ch[0] != ch[1];
		*res = tmp;
		break;
	case ID_LEFT:
		tmp = ch[0] << ch[1];				//数组第二个为需要位移的个数
		*res = tmp;
		break;
	case ID_RIGHT:
		tmp = ch[0] >> ch[1];				//数组第二个为需要位移的个数
		*res = tmp;
		break;
	default:
		flag = FALSE;
		break;
	}
	return flag;
}

BOOL CCalculator::ProcBinDataU(int n, UCHAR *uch, UCHAR *res)
{
	BOOL flag = TRUE;
	UCHAR tmp;
	switch (n)
	{
	case ID_PLUS:
		tmp = uch[0] + uch[1];
		*res = tmp;
		break;
	case ID_MINUS:
		tmp = uch[0] - uch[1];
		*res = tmp;
		break;
	case ID_MUL:
		tmp = uch[0] * uch[1];
		*res = tmp;
		break;
	case ID_DIV:
		tmp = uch[0] / uch[1];
		*res = tmp;
		break;
	case ID_AND:
		tmp = uch[0] & uch[1];
		*res = tmp;
		break;
	case ID_OR:
		tmp = uch[0] | uch[1];
		*res = tmp;
		break;
	case ID_XOR:
		tmp = uch[0] ^ uch[1];
		*res = tmp;
		break;
	case ID_WITH:
		tmp = uch[0] && uch[1];
		*res = tmp;
		break;
	case ID_PERHAPS:
		tmp = uch[0] || uch[1];
		*res = tmp;
		break;
	case ID_EQUAL:
		tmp = uch[0] == uch[1];
		*res = tmp;
		break;
	case ID_NOEQUAL:
		tmp = uch[0] != uch[1];
		*res = tmp;
		break;
	case ID_LEFT:
		tmp = uch[0] << uch[1];				//数组第二个为需要位移的个数
		*res = tmp;
		break;
	case ID_RIGHT:
		tmp = uch[0] >> uch[1];				//数组第二个为需要位移的个数
		*res = tmp;
		break;
	default:
		flag = FALSE;
		break;
	}
	return flag;
}
