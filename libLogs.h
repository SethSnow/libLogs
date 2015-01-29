/************************************************************************/
/* libLogs���ڲ���һ��������չ���û����Ƶ���־�����⺯����                                */
/************************************************************************/

#ifndef LIB_LOGS_H
#define LIB_LOGS_H

#include "platform.h"

LIB_LOGS_BEGIN


	typedef bool (*CreateNewFileCondition)();

/************************************************************************/
/* ����һ����־ϵͳ�ӿڽṹ������һ������ӿ���                                                  */
/************************************************************************/
 LIB_LOGS_INTERFACE LIB_LOGS_API LibLogsSystem
{
	virtual void setSaveDir(const char* logsFileDir) = 0;
	virtual void setCreateNewFileConditionParam(CreateNewFileCondition condFunc) = 0;
	virtual void writeLogs(const char* logs) = 0;
	virtual void closeLogsFile() = 0;
	virtual ~LibLogsSystem(){}
};


 enum LogsType
 {
	 TIME_SHARE = 0

 };

 /************************************************************************/
 /* ����һ��LibLogsSystem�ӿڵ�ʵ����ע�����ʵ���Ǵ�API���ڶ�ջ�����롣     */
 /************************************************************************/
extern LIB_LOGS_API LibLogsSystem* CreateLogesSystem(LogsType logsType = TIME_SHARE);


/************************************************************************/
/* ����һ����CreateLogesSystem������ʵ�����ڲ����Ὣ�ļ����йرղ���            */
/************************************************************************/
extern LIB_LOGS_API void DestroyLogsSystem(LibLogsSystem* logsSys);



LIB_LOGS_END
#endif





