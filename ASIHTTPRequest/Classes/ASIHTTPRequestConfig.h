//
//  ASIHTTPRequestConfig.h
//  Part of ASIHTTPRequest -> http://allseeing-i.com/ASIHTTPRequest
//
//  Created by Ben Copsey on 14/12/2009.
//  Copyright 2009 All-Seeing Interactive. All rights reserved.
//


// ======
// Debug output configuration options
// ======

// If defined will use the specified function for debug logging
// Otherwise use NSLog
#ifndef ASI_DEBUG_LOG
    #define ASI_DEBUG_LOG NSLog
#endif

// 当设置为1 ASIHTTPRequests将打印信息请求在做什么
#ifndef DEBUG_REQUEST_STATUS
	#define DEBUG_REQUEST_STATUS 0
#endif

// 当设置为1,ASIFormDataRequests将请求主体的信息打印到控制台
#ifndef DEBUG_FORM_DATA_REQUEST
	#define DEBUG_FORM_DATA_REQUEST 0
#endif

// 当设置为1,ASIHTTPRequests将带宽调节信息打印到控制台
#ifndef DEBUG_THROTTLING
	#define DEBUG_THROTTLING 0
#endif

// 当设置为1,ASIHTTPRequests将持久连接的信息打印到控制台
#ifndef DEBUG_PERSISTENT_CONNECTIONS
	#define DEBUG_PERSISTENT_CONNECTIONS 0
#endif

// 设置为1时,ASIHTTPRequests将打印HTTP身份验证信息(基础,消化或NTLM)到控制台
#ifndef DEBUG_HTTP_AUTHENTICATION
    #define DEBUG_HTTP_AUTHENTICATION 0
#endif
