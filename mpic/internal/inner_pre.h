#pragma once

#include "../platform_config.h"
#include "../mpic_export.h"

#ifdef __cplusplus
//#define GOOGLE_GLOG_DLL_DECL           // ʹ�þ�̬glog��ʱ�����붨�����
#define GLOG_NO_ABBREVIATED_SEVERITIES // û�����������
#include <glog/logging.h>
#endif

#ifndef H_CASE_STRING_BIGIN
#define H_CASE_STRING_BIGIN(state) switch(state){
#define H_CASE_STRING(state) case state:return #state;break;
#define H_CASE_STRING_END()  default:return "Unknown";break;}
#endif
