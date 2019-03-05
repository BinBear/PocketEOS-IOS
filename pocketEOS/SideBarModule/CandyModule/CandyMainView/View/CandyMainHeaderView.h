//
//  CandyMainHeaderView.h
//  pocketEOS
//
//  Created by oraclechain on 2018/5/21.
//  Copyright © 2018 oraclechain. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CandyEquityModel.h"

@interface CandyMainHeaderView : UIView
@property(nonatomic , strong) NSMutableArray *dataArray;
@property(nonatomic, strong) UICollectionView *mainCollectionView;

@property(nonatomic , copy) void(^onCandyMainCollectionCellDidSelectItemBlock)(CandyEquityModel *);
@end
