//
//  CityChoose.h
//  CityChoose-master
//
//  Created by 纵昂 on 2017/2/17.
//  Copyright © 2017年 纵昂. All rights reserved.
//

#import <UIKit/UIKit.h>
typedef void (^sureButtonClick) (NSString *province ,NSString *city ,NSString *town);
@interface CityChoose : UIView
@property (nonatomic, strong) NSString *province;           /** 省 */
@property (nonatomic, strong) NSString *city;               /** 市 */
@property (nonatomic, strong) NSString *town;               /** 县 */
@property (nonatomic, copy) sureButtonClick config;
@end
