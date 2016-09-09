//
//  MDSProperty.m
//  ModelJson
//
//  Created by zhujinhui on 16/9/9.
//  Copyright © 2016年 kyson. All rights reserved.
//

#import "MDSProperty.h"

@implementation MDSProperty

SETARRAYPROPERTY(MDSAgr, agrList, AgrList)

SETPROPERTY(MDSSign, signList, SignList)



-(id)copyWithZone:(NSZone *)zone{
    MDSProperty *instance = [[MDSProperty alloc] init];
    
    NSDictionary *dict = [self dictionaryRepresentation];
    [instance loadPropertiesWithData:dict];
    return instance;
}

@end
