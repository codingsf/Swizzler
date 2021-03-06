/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "KLViewMgrBase.h"

#import "DatePickerHandler-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class DaysView, KLGridView, KLTile, NSArray, NSDate, UIImageView, UITableView, UIViewController;

@interface KLMonthViewMgr : KLViewMgrBase <UITableViewDelegate, UITableViewDataSource, DatePickerHandler>
{
    int currentWeekRows;
    KLTile *currentTile;
    NSArray *appointmentsOfMonth;
    NSDate *beginDate;
    NSDate *endDate;
    BOOL UILoaded;
    UIViewController *_parentController;
    DaysView *_daysView;
    KLGridView *_grid;
    UITableView *_myTableView;
    UIImageView *_calDropShadowView;
    UIImageView *_calDropShadowViewBis;
    UIImageView *_calDropShadowViewTer;
    float viewWidth;
}

- (void)setParentController:(id)fp8;
- (id)parentController;
- (void)setDaysView:(id)fp8;
- (id)daysView;
- (void)setGrid:(id)fp8;
- (id)grid;
- (void)setMyTableView:(id)fp8;
- (id)myTableView;
- (void)setAppointmentsOfMonth:(id)fp8;
- (id)appointmentsOfMonth;
- (void)dealloc;
- (void)animationDidStop:(id)fp8 finished:(BOOL)fp12;
- (struct CGRect)tableViewRect;
- (void)didChangeMonths;
- (id)monthViewMgr:(id)fp8 createTileForDate:(id)fp12 appointments:(id)fp16;
- (void)monthViewMgr:(id)fp8 tappedTile:(id)fp12 action:(id)fp16;
- (id)tableView:(id)fp8 cellForRowAtIndexPath:(id)fp12;
- (int)tableView:(id)fp8 numberOfRowsInSection:(int)fp12;
- (float)tableView:(id)fp8 heightForRowAtIndexPath:(id)fp12;
- (int)numberOfSectionsInTableView:(id)fp8;
- (void)refreshTableViewPosition;
- (void)refreshDayPickerPosition;
- (void)tableView:(id)fp8 didSelectRowAtIndexPath:(id)fp12;
- (id)rightNeighborOfTile:(id)fp8;
- (id)leftNeighborOfTile:(id)fp8;
- (void)clearAndFillGrid;
- (void)redrawNeighborsAndTile:(id)fp8;
- (void)dateUpdatedTo:(id)fp8;
- (void)PickAPeriod;
- (void)showFollowingPeriod;
- (void)showPreviousPeriod;
- (void)navigationAction:(id)fp8;
- (void)initDateForNewMonth;
- (void)refreshViewWithPushDirection:(id)fp8;
- (void)addTilesToGrid;
- (void)tileInSelectedMonthTappedRight:(id)fp8;
- (void)tileInSelectedMonthTappedLeft:(id)fp8;
- (void)tileInSelectedMonthTapped:(id)fp8;
- (void)drawDayNames:(id)fp8;
- (void)createCalendarDropShadowTer:(float)fp8;
- (void)createCalendarDropShadowBis:(float)fp8;
- (void)createCalendarDropShadow:(float)fp8;
- (void)setCurrentTileFromCurrentDate;
- (BOOL)isDisplayed:(id)fp8;
- (void)viewDidAppear:(BOOL)fp8;
- (void)viewWillAppear:(BOOL)fp8;
- (void)handleDateChange;
- (void)removeUI;
- (void)addUI;
- (void)setControllerTitle:(id)fp8;
- (float)getMonthViewRowHeight_L;
- (float)getMonthViewRowHeight;
- (float)getViewWidth_L;
- (float)getViewWidth;

@end

