// Calculator.h: interface for the CCalculator class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_CALCULATOR_H__F685FDE7_3C05_4E6A_A965_49AC931109EA__INCLUDED_)
#define AFX_CALCULATOR_H__F685FDE7_3C05_4E6A_A965_49AC931109EA__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
#include "ByteData.h"

typedef enum
{
	ID_PLUS,
		ID_MINUS,
		ID_MUL,
		ID_DIV,
		ID_AND,
		ID_OR,
		ID_XOR,
		ID_WITH,
		ID_PERHAPS,
		ID_EQUAL,
		ID_NOEQUAL,
		ID_LEFT,
		ID_RIGHT,
		ID_OPPSITE,
		ID_NO,
		ID_MAX,
}Operator;

class CCalculator  
{
public:
	CCalculator();
	virtual ~CCalculator();

public:
	BOOL ProcBinDataU(int n,UCHAR *uch,UCHAR *res);
	BOOL ProcBinDataC(int n,char *ch, char *res);
	BOOL ProcUnaryDataU(int n,UCHAR *uch, UCHAR *res);
	BOOL ProcUnaryDataC(int n, char *ch, char *res);
	BOOL GetWhichOper(int *p);
	void SetOper(int n,BOOL oper);
	BOOL m_bOper[ID_MAX];
private:
	void InitOperator();
};

#endif // !defined(AFX_CALCULATOR_H__F685FDE7_3C05_4E6A_A965_49AC931109EA__INCLUDED_)
