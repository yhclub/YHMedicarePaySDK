//
//  NSDictionary+YHMP.h
//  YHMedicarePaySDK
//
//  Created by Jagtu on 2018/8/30.
//

#import <Foundation/Foundation.h>

@interface NSDictionary (YHMP)

-(NSString *)yhmp_signSortString;

-(NSString *)yhmp_signWithMd5WithSecret:(NSString *)secret;

@end
