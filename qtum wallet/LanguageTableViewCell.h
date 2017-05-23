//
//  LanguageTableViewCell.h
//  qtum wallet
//
//  Created by Sharaev Vladimir on 23.05.17.
//  Copyright © 2017 Designsters. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface LanguageTableViewCell : UITableViewCell

- (void)setData:(NSString *)titleText selected:(BOOL)selected;
- (void)changeCellStyle:(BOOL)selected;

@end
