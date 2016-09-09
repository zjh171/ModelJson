//
//  MDSConfig.h
//  ModelJson
//
//  Created by zhujinhui on 16/9/9.
//  Copyright © 2016年 kyson. All rights reserved.
//

#import "MDSModel.h"


/**
 
 
 "downloadUrl": "http://thedoc.cn/upgrade/android/mediclientcbd_release_medishare.apk",
 "chatUrl": "ws://192.168.0.215:8088/chat",
 "forceUpdate": "0",
 "version": "1.7",
 "packageSize": "3.8MB",
 "updateContent": "1.重量级改版V1.6;\n2.更贴心的服务流程;\n3.更快速的反馈速度.",
 "relogin": "1"
 
 
 
 
 
 
 
 
 
 */

@interface MDSConfig : MDSModel


///下载地址
CREATE_STRING_PROPERTY(downloadUrl)

///下载地址
CREATE_STRING_PROPERTY(chatUrl)
///下载地址

CREATE_STRING_PROPERTY(forceUpdate)




@end
