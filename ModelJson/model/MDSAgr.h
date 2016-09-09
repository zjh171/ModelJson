//
//  MDSAgr.h
//  ModelJson
//
//  Created by zhujinhui on 16/9/9.
//  Copyright © 2016年 kyson. All rights reserved.
//

#import "MDSModel.h"

#import "MDSPrice.h"

/**
 
 
 "id": "102806",
 "name": "图文咨询",
 "icon": "http://upyun.thedoc.cn/cdn/c_home_page/btn-tuwen.png",
 "link": "http://192.168.0.215/h5/activity/addService/dhzx_B2.html?id=100012",
 "text": "desc1",
 "title": "图文咨询",
 "priceText": "免费",
 "isChat": true,
 "showCall": false,
 "lineCount": 0,
 "textColor": "#d14479",
 "hideTime": false,
 "seq": "100",
 "autodiagnosisFlg": false,
 "tagType": "TWZX",
 "price": {
 "图文咨询": {
 "amount": 0
 }
 },
 "enabled":true,
 "created":1449662978000,
 "updated":1449662978000
 
 
 
 */

@interface MDSAgr : MDSModel


CREATE_STRING_PROPERTY(id)
CREATE_STRING_PROPERTY(priceText)
CREATE_STRING_PROPERTY(enabled)
CREATE_STRING_PROPERTY(created)


@property (nonatomic, strong) MDSPrice *price;

@end
