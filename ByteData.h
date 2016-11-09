// ByteData.h: interface for the CByteData class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_BYTEDATA_H__77959EF5_F6E2_4889_9A75_0AECCDBE5D9F__INCLUDED_)
#define AFX_BYTEDATA_H__77959EF5_F6E2_4889_9A75_0AECCDBE5D9F__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
#define BYTE_LEN 8
class CByteData  
{
public:
	CByteData();
	virtual ~CByteData();

private:
	void InitByteData();
	BOOL	bTrue[BYTE_LEN];
	BOOL	bNeg[BYTE_LEN];
	BOOL	bCom[BYTE_LEN];
	UCHAR	ucData;
	char	cData;
	CString	strHex;
	CString	strDec;
	BOOL bFlag;

public:
	void SetBitFromDataU();
	void SetBitFromDataC();
	void ProcByteData();
	BOOL GetFlag();
	CString GetStrDec();
	CString GetStrHex();
	UCHAR GetUcData();
	char GetCData();
	BOOL GetCom(int n);
	BOOL GetNeg(int n);
	BOOL GetTrue(int n);
	void SetFlag(BOOL flag);
	void SetStrDec(CString strDec);
	void SetStrHex(CString strHex);
	void SetcData(UCHAR cTmp);
	void SetUcData(UCHAR uTmp);
	void SetCom(int n,BOOL bData);
	void SetNeg(int n,BOOL bData);
	void SetTrue(int n,BOOL bData);
};

#endif // !defined(AFX_BYTEDATA_H__77959EF5_F6E2_4889_9A75_0AECCDBE5D9F__INCLUDED_)
