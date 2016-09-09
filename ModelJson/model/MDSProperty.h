//
//  MDSProperty.h
//  ModelJson
//
//  Created by zhujinhui on 16/9/9.
//  Copyright © 2016年 kyson. All rights reserved.
//

#import "MDSModel.h"
#import "MDSSign.h"
#import "MDSAgr.h"

@interface MDSProperty : MDSModel<NSCopying>


///这是一个数组list
@property (nonatomic, strong) NSArray<MDSAgr *> *agrList;

///list
@property (nonatomic, strong) MDSSign *signList;


@end
