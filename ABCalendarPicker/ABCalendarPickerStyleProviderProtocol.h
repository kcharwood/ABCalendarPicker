//
//  ABCalendarPickerStyleProviderProtocol.h
//  ABCalendarPicker
//
//  Created by Anton Bukov on 23.07.12.
//  Copyright (c) 2013 Anton Bukov. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>

@protocol ABCalendarPickerStyleProviderProtocol <NSObject>

@property (readonly,nonatomic) UIColor * textColor;
@property (readonly,nonatomic) UIColor * textShadowColor;
@property (readonly,nonatomic) UIImage * patternImageForGradientBar;

- (UIControl*)calendarPicker:(ABCalendarPicker*)calendarPicker
            cellViewForTitle:(NSString*)cellTitle
                    andState:(ABCalendarPickerState)state;

- (void)calendarPicker:(ABCalendarPicker*)calendarPicker
 postUpdateForCellView:(UIControl*)control
        onControlState:(UIControlState)controlState
            withEvents:(NSInteger)eventsCount
              andState:(ABCalendarPickerState)state;

@end
