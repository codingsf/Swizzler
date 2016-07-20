//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//
// SDK Root: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS7.1.sdk/
//

#import "NSObject.h"

@interface GMMTaskManager : NSObject
{
}

+ (id)date:(id)arg1 byAdding:(int)arg2;
+ (BOOL)isDateTheFollowingWeek:(id)arg1;
+ (BOOL)isDateTomorrow:(id)arg1;
+ (BOOL)isDateToday:(id)arg1;
+ (id)formatDueDate:(id)arg1;
+ (id)allScheduledReminders;
+ (void)removeAllScheduledReminders;
+ (void)removeLocalNotificationForTask:(id)arg1;
+ (void)removeReminderForTaskRec:(unsigned short)arg1;
+ (BOOL)scheduleLocalNotificationForTask:(id)arg1;
+ (void)rescheduleReminderForTaskRec:(unsigned short)arg1;
+ (void)editReminderForTaskRec:(unsigned short)arg1;
+ (void)scheduleReminderForTaskRec:(unsigned short)arg1;
+ (void)rescheduleReminders;
+ (void)goToTask;
+ (id)reminderTextForTask:(id)arg1;
+ (void)showModallyInTaskVCTaskForRecordNumber:(int)arg1;
+ (void)presentScheduledReminderForRecordNumber:(int)arg1;
+ (void)presentScheduledReminderForRecordNumber:(int)arg1 withAlert:(BOOL)arg2;
+ (void)presentScheduledReminderForLocalNotification:(id)arg1;
+ (BOOL)isShowReminderIfLocked;
+ (id)allTasks;
+ (BOOL)deleteTaskWithRecNumber:(unsigned short)arg1;
+ (BOOL)syncTasks;
+ (id)createTask;
+ (void)setupDefaultPriorityForTask:(id)arg1;

@end
