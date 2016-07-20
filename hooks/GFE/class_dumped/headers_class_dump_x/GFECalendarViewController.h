/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookAddRecord.h"

#import "CalendarEventViewControllerDelegate-Protocol.h"
#import "GTBarButtonItem-Protocol.h"
#import "GTCalendarDataSourceDelegate-Protocol.h"
#import "GTCalendarViewControllerDelegate-Protocol.h"
#import "GTPopoverViewDelegate-Protocol.h"
#import "UIPopoverControllerDelegate-Protocol.h"

@class CalendarDBNotificationProxy, CalendarEventDAO, GTCalendarViewController, GUNavigationController, GUNoPassthroughViewsPopoverController, GUPopoverView, NSNumber, UISegmentedControl, UIView, UIViewController;

@interface GFECalendarViewController : _ABAddressBookAddRecord <GTCalendarDataSourceDelegate, GTBarButtonItem, GTPopoverViewDelegate, UIPopoverControllerDelegate, CalendarEventViewControllerDelegate, GTCalendarViewControllerDelegate>
{
    GUPopoverView *_popoverView;
    UIView *_selectedTabViewContainer;
    BOOL _showCurrentDayTimeOnAppear;
    GTCalendarViewController *_calendarViewController;
    CalendarEventDAO *_calendarEventDao;
    CalendarDBNotificationProxy *_notificationProxy;
    GUNoPassthroughViewsPopoverController *_calendarPopoverVC;
    UIView *_calendarPopoverVCPresentingView;
    UISegmentedControl *_calendarSegmentedControl;
    UIViewController *_controlerInPopover;
    NSNumber *_requestedViewIndex;
    GUNavigationController *_lastPopoverNVC;
}

+ (void)initialize;
- (void)setLastPopoverNVC:(id)fp8;
- (id)lastPopoverNVC;
- (void)setShowCurrentDayTimeOnAppear:(BOOL)fp8;
- (BOOL)showCurrentDayTimeOnAppear;
- (void)setRequestedViewIndex:(id)fp8;
- (id)requestedViewIndex;
- (void)setControlerInPopover:(id)fp8;
- (id)controlerInPopover;
- (void)setCalendarSegmentedControl:(id)fp8;
- (id)calendarSegmentedControl;
- (void)setCalendarPopoverVCPresentingView:(id)fp8;
- (id)calendarPopoverVCPresentingView;
- (void)setCalendarPopoverVC:(id)fp8;
- (id)calendarPopoverVC;
- (void)setNotificationProxy:(id)fp8;
- (id)notificationProxy;
- (void)setCalendarEventDao:(id)fp8;
- (id)calendarEventDao;
- (void)setCalendarViewController:(id)fp8;
- (id)calendarViewController;
- (void)popoverControllerDidDismissPopover:(id)fp8;
- (void)dismissEventViewController:(id)fp8 animated:(BOOL)fp12;
- (void)dismissCurrentPopoverControllerAnimated:(BOOL)fp8;
- (void)segmentSelected:(id)fp8;
- (id)segmentedControlWithTitles:(id)fp8;
- (void)popoverViewDidDismiss:(id)fp8;
- (void)popoverView:(id)fp8 didSelectItemAtIndex:(int)fp12;
- (void)popoverView:(id)fp8 didRotateToItemAtIndex:(int)fp12;
- (void)showCalendarPopoverAtPoint:(struct CGPoint)fp8 withSelectedTabView:(id)fp16;
- (id)toolbarButtonItemWithImage:(id)fp8 style:(int)fp12 target:(id)fp16 action:(SEL)fp20;
- (id)toolbarButtonItemWithBarButtonSystemItem:(int)fp8 target:(id)fp12 action:(SEL)fp16;
- (id)toolbarButtonItemWithTitle:(id)fp8 style:(int)fp12 target:(id)fp16 action:(SEL)fp20;
- (id)toolbarWithFrame:(struct CGRect)fp8;
- (id)barButtonItemWithImage:(id)fp8 style:(int)fp12 target:(id)fp16 action:(SEL)fp20;
- (id)barButtonItemWithBarButtonSystemItem:(int)fp8 target:(id)fp12 action:(SEL)fp16;
- (id)barButtonItemWithTitle:(id)fp8 style:(int)fp12 target:(id)fp16 action:(SEL)fp20;
- (void)reloadData;
- (BOOL)shouldDrawerBeOpen;
- (void)addCalendarEventAt:(id)fp8 allDay:(BOOL)fp12 fromPoint:(struct CGPoint)fp16 inSender:(id)fp24;
- (void)addCalendarEventAt:(id)fp8 allDay:(BOOL)fp12 withSender:(id)fp16;
- (void)changeCalendarView:(int)fp8;
- (void)delayedChangeCalendarView:(id)fp8;
- (void)presentPopoverWithViewController:(id)fp8 fromPoint:(struct CGPoint)fp12 inObject:(id)fp20;
- (void)openAppointmentDetails:(id)fp8 inObject:(id)fp12;
- (void)openAppointmentWithID:(unsigned long)fp8 andInstance:(long)fp12;
- (void)eventBubbleDidShow:(id)fp8;
- (int)getSelectedCalendarViewIndex;
- (void)dismissDoneAction;
- (void)viewConflictManager:(id)fp8 fromView:(id)fp12;
- (BOOL)isCalendarPopoverVisible;
- (void)viewCalendarOccurrence:(id)fp8 fromObject:(id)fp12;
- (id)getCalendarOccurrencesForCalendarEventWithId:(unsigned int)fp8 startDate:(id)fp12 toEndDate:(id)fp16;
- (id)getCalendarEventDetailWithCalendarOccurrence:(id)fp8;
- (id)getCalendarOccurrencesFromStartDate:(id)fp8 toEndDate:(id)fp12 lazy:(BOOL)fp16;
- (void)allTouchesBegan:(id)fp8;
- (void)processCalendarNotification:(id)fp8;
- (void)dissmissCurrentPopover;
- (void)firstDayOfTheWeekChanged:(id)fp8;
- (void)appUnlocked;
- (void)didReceiveMemoryWarning;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)fp8;
- (unsigned int)supportedInterfaceOrientations;
- (BOOL)shouldAutorotate;
- (void)didRotateFromInterfaceOrientation:(int)fp8;
- (void)willRotateToInterfaceOrientation:(int)fp8 duration:(double)fp12;
- (void)viewWillDisappear:(BOOL)fp8;
- (void)viewDidAppear:(BOOL)fp8;
- (void)setHidesTabBar:(BOOL)fp8;
- (void)viewWillAppear:(BOOL)fp8;
- (void)viewDidLoad;
- (id)initWithNibName:(id)fp8 bundle:(id)fp12;
- (void)dealloc;

@end

