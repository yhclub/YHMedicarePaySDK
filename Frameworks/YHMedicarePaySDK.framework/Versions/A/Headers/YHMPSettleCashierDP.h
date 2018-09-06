//
//  YHMPSettleCashierDP.h
//  YHMedicarePaySDK
//
//  Created by Jagtu on 2018/8/23.
//

#import <Foundation/Foundation.h>

@interface YHMPSettleCashierDP : NSObject

@property(nonatomic,strong)YHMPPrescModel *model;

@property(nonatomic,strong)NSMutableArray *dataArray;

@property(nonatomic,strong)NSMutableArray *presItemArray;

@property(nonatomic,strong)NSMutableArray *channelArray;

-(void)reloadData;

-(void)reloadChannelArray:(NSArray *)channelArray;

@end
