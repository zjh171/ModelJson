//
//  MDSSign.h
//  ModelJson
//
//  Created by zhujinhui on 16/9/9.
//  Copyright © 2016年 kyson. All rights reserved.
//

#import "MDSModel.h"


/**
 
 
 
 
 "id": "1832",
 "memberId": "com.medishare.manis.domain.member.Doctor_1832",
 "portrait": "http://192.168.0.213:8082/img/f7783d3a-f3d9-41e3-85d6-fbaf2f8c2aa6.jpg",
 "inService": true,
 "doctorType": "1",
 "username": "13641955723",
 "realname": "jacky_medishare",
 "gender": "男",
 "titleType": "3",
 "hospitalId": "4535",
 "departmentId": "11",
 "description": "ddddesc",
 "provinceId": "7",
 "cityId": "9",
 "districtId": "3",
 

 
 
 
 
 */

@interface MDSSign : MDSModel

CREATE_STRING_PROPERTY(memberId)
CREATE_STRING_PROPERTY(portrait)
CREATE_STRING_PROPERTY(inService)
CREATE_STRING_PROPERTY(doctorType)
CREATE_STRING_PROPERTY(username)
CREATE_STRING_PROPERTY(realname)
CREATE_STRING_PROPERTY(gender)

@end
