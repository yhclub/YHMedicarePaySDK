//
//  YHMPDeviceModel.h
//  YHMedicarePaySDK
//
//  Created by Jagtu on 2018/8/20.
//

#import <Foundation/Foundation.h>

@interface YHMPDeviceModel : NSObject

//APP 版本
@property(nonatomic,copy)NSString *appVersion;

@property(nonatomic,copy)NSString *bundleVersion;

//bundle Id
@property(nonatomic,copy)NSString *bundleID;

//APP 名称
@property(nonatomic,copy)NSString *appDisplayName;

/**
 *  系统iOS主版本号
 */
@property(nonatomic,assign)NSUInteger systemMajorVersion;

/**
 *  系统iOS版本号
 */
@property(nonatomic,copy)NSString *systemVersion;

/**
 *  设备机型
 */
@property(nonatomic,copy)NSString *deviceModel;

/**
 *  屏幕分辨率
 */
@property(nonatomic,copy)NSString *screenResolution;

/**
 * 设备名称
 */
@property(nonatomic,copy)NSString *deviceName;

/**
 * 获取APP唯一标识
 */
@property(nonatomic,copy)NSString *deviceId;

//当前语种
@property(nonatomic,copy)NSString *currentLanguage;

//当前位置
@property(nonatomic,copy)NSString *currentLocale;

//当前IP地址
@property(nonatomic,copy)NSString *currentIp;

@end
