//
//  ViewController.m
//  ModelJson
//
//  Created by zhujinhui on 16/9/9.
//  Copyright © 2016年 kyson. All rights reserved.
//

#import "ViewController.h"
#import "MDSConfig.h"
#import "MDSProperty.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
    
}



- (IBAction)mdsConfigButtonClicked:(id)sender {
    NSError *error = nil;
    NSStringEncoding encoding;
    
    NSString *path = [[NSBundle mainBundle] pathForResource:@"AJson" ofType:@"json"];
    NSString *jsonString = [[NSString alloc ]initWithContentsOfFile:path usedEncoding:&encoding error:&error];
    
    NSData *jsonData = [jsonString dataUsingEncoding:NSUTF8StringEncoding];
    
    id jsonObject = [NSJSONSerialization JSONObjectWithData:jsonData options:NSJSONReadingAllowFragments error:&error];
    
    if ([jsonObject isKindOfClass:[NSDictionary class]]) {
        NSDictionary *jsonDictionary = (NSDictionary *) jsonObject;
        NSDictionary *data = jsonDictionary[@"data"];
        if ([data isKindOfClass:[NSDictionary class]]) {
            NSArray *list = data[@"list"] ;
            if ([list isKindOfClass:[NSArray class]]) {
                
                
                MDSConfig *config = [[MDSConfig alloc] init];
                NSDictionary *resultObj = list.firstObject;
                if ([resultObj isKindOfClass:[NSDictionary class]]) {
                    [config loadPropertiesWithData:resultObj];
                    NSLog(@"config :%@",config);
                }
                
            }
            
        }
        
        
    }
    
}


- (IBAction)propertyButtonClicked:(id)sender {
    
    NSError *error = nil;
    NSStringEncoding encoding;
    
    NSString *path = [[NSBundle mainBundle] pathForResource:@"B_correct" ofType:@"json"];
    NSString *jsonString = [[NSString alloc ]initWithContentsOfFile:path usedEncoding:&encoding error:&error];
    
    NSData *jsonData = [jsonString dataUsingEncoding:NSUTF8StringEncoding];
    
    id jsonObject = [NSJSONSerialization JSONObjectWithData:jsonData options:NSJSONReadingAllowFragments error:&error];
    
    if ([jsonObject isKindOfClass:[NSDictionary class]]) {
        NSDictionary *jsonDictionary = (NSDictionary *) jsonObject;
        NSDictionary *data = jsonDictionary[@"data"];
        if ([data isKindOfClass:[NSDictionary class]]) {
            MDSProperty *property = [[MDSProperty alloc] init];
            [property loadPropertiesWithData:data];
            NSLog(@"property :%@",property);
            
            
            MDSProperty *p2 = [property copy];
            
            
            NSLog(@"property2 :%@",p2);

            
            
            
        }
        
        
    }
    
    
    
}


- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}




@end
