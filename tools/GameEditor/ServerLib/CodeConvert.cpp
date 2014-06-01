#include "CodeConvert.h"

#ifdef WIN32
#include <Windows.h>

void CodeConvert::UTF8ToUnicode(wchar_t* pOut,char *pText)  
{  
	char* uchar = (char *)pOut;  

	uchar[1] = ((pText[0] & 0x0F) << 4) + ((pText[1] >> 2) & 0x0F);  
	uchar[0] = ((pText[1] & 0x03) << 6) + (pText[2] & 0x3F);  

	return;  
}  

void CodeConvert::UnicodeToUTF8(char* pOut,wchar_t* pText)  
{  
	// ע�� WCHAR�ߵ��ֵ�˳��,���ֽ���ǰ�����ֽ��ں�  
	char* pchar = (char *)pText;  

	pOut[0] = (0xE0 | ((pchar[1] & 0xF0) >> 4));  
	pOut[1] = (0x80 | ((pchar[1] & 0x0F) << 2)) + ((pchar[0] & 0xC0) >> 6);  
	pOut[2] = (0x80 | (pchar[0] & 0x3F));  

	return;  
}  

void CodeConvert::UnicodeToGB2312(char* pOut,wchar_t uData)  
{  
	WideCharToMultiByte(CP_ACP,NULL,&uData,1,pOut,sizeof(wchar_t),NULL,NULL);  
	return;  
}       

void CodeConvert::Gb2312ToUnicode(wchar_t* pOut,char *gbBuffer)  
{  
	::MultiByteToWideChar(CP_ACP,MB_PRECOMPOSED,gbBuffer,2,pOut,1);  
	return ;  
}  

void CodeConvert::GB2312ToUTF8(string& pOut,char *pText, int pLen)  
{  
	char buf[4];  
	int nLength = pLen* 3;  
	char* rst = new char[nLength+1];  

	memset(buf,0,4);  
	memset(rst,0,nLength);  



	int i = 0;  
	int j = 0;        
	while(i < pLen)  
	{  
		//�����Ӣ��ֱ�Ӹ��ƾͿ���  
		if( *(pText + i) >= 0)  
		{  
			rst[j++] = pText[i++];  
		}  
		else  
		{  
			wchar_t pbuffer;  
			Gb2312ToUnicode(&pbuffer,pText+i);  

			UnicodeToUTF8(buf,&pbuffer);  

			unsigned short int tmp = 0;  
			tmp = rst[j] = buf[0];  
			tmp = rst[j+1] = buf[1];  
			tmp = rst[j+2] = buf[2];      

			j += 3;  
			i += 2;  
		}  
	}  
	rst[j] = '\0';  

	//���ؽ��  
	pOut = rst;               
	delete [] rst;     

	return;  
}  

void CodeConvert::UTF8ToGB2312(string &pOut, char *pText, int pLen)  
{  
	char * newBuf = new char[pLen+1];  
	char Ctemp[4];  
	memset(Ctemp,0,4);  

	int i =0;  
	int j = 0;  

	while(i < pLen)  
	{  
		if(pText[i] > 0)  
		{  
			newBuf[j++] = pText[i++];                         
		}  
		else                   
		{  
			WCHAR Wtemp;  
			UTF8ToUnicode(&Wtemp,pText + i);  

			UnicodeToGB2312(Ctemp,Wtemp);  

			newBuf[j] = Ctemp[0];  
			newBuf[j + 1] = Ctemp[1];  

			i += 3;      
			j += 2;     
		}  
	}  
	newBuf[j] = '\0';  

	pOut = newBuf;  
	delete [] newBuf;  

	return;   
}  

#endif