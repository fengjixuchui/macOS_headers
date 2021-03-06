//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MacRAPBaseTableViewController.h"

#import "MacRAPCheckmarkCellDelegate-Protocol.h"
#import "MapsUITableViewDiffableDataSourceCellProviding-Protocol.h"
#import "RAPInstrumentableTarget-Protocol.h"

@class NSArray, NSString, RAPHoursSection, RAPStoreHour, UITableViewDiffableDataSource;
@protocol RAPAddHoursDelegate;

__attribute__((visibility("hidden")))
@interface RAPAddHoursTableViewController : MacRAPBaseTableViewController <MapsUITableViewDiffableDataSourceCellProviding, MacRAPCheckmarkCellDelegate, RAPInstrumentableTarget>
{
    RAPStoreHour *_model;
    NSArray *_orderedWeekdays;
    RAPHoursSection *_startHoursSection;
    RAPHoursSection *_endHoursSection;
    UITableViewDiffableDataSource *_diffableDataSource;
    id <RAPAddHoursDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <RAPAddHoursDelegate> delegate; // @synthesize delegate=_delegate;
- (void)checkmarkTableViewCell:(id)arg1 isSelected:(BOOL)arg2;
- (void)macRAPFooterViewRightButtonTapped:(id)arg1;
- (void)macRAPFooterViewLeftButtonTapped:(id)arg1;
@property(readonly, nonatomic) int analyticTarget;
- (void)_captureUserAction:(int)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 itemIdentifier:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)_updateTitleCell:(id)arg1 shouldIlluminate:(BOOL)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)_weekdayForIndexPath:(id)arg1;
- (void)_setAppearanceForDayCell:(id)arg1 withDay:(id)arg2;
- (void)dateChanged:(id)arg1;
- (void)allDayOptionChanged:(id)arg1;
- (id)_allDaySwitch;
- (BOOL)_isDaySection:(long long)arg1;
- (void)_cancelAddingHours;
- (void)_commitAddingHours;
- (void)viewDidLoad;
- (void)_commonInit;
- (id)initWithStyle:(long long)arg1;

// Remaining properties
@property(readonly, nonatomic) int backAction;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

