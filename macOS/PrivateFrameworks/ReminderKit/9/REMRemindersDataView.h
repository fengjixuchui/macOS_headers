//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class REMStore;

@interface REMRemindersDataView : NSObject
{
    REMStore *_store;
}

+ (id)remindersFromAccountStorages:(id)arg1 listStorages:(id)arg2 reminderStorages:(id)arg3 store:(id)arg4 showMarkedForDeleteObjects:(BOOL)arg5;
+ (id)remindersFromAccountStorages:(id)arg1 listStorages:(id)arg2 reminderStorages:(id)arg3 store:(id)arg4 requestedStringIdentifiers:(id)arg5 identifierSelector:(SEL)arg6;
+ (id)remindersFromAccountStorages:(id)arg1 listStorages:(id)arg2 reminderStorages:(id)arg3 store:(id)arg4 requestedReminderIDs:(id)arg5 showMarkedForDeleteObjects:(BOOL)arg6;
- (void).cxx_destruct;
@property(readonly, nonatomic) REMStore *store; // @synthesize store=_store;
- (id)fetchRemindersWithDACalendarItemUniqueIdentifiers:(id)arg1 inList:(id)arg2 error:(id *)arg3;
- (id)fetchReminderWithDACalendarItemUniqueIdentifier:(id)arg1 inList:(id)arg2 error:(id *)arg3;
- (id)fetchAllRemindersWithExternalIdentifier:(id)arg1 error:(id *)arg2;
- (id)fetchRemindersWithExternalIdentifiers:(id)arg1 inList:(id)arg2 error:(id *)arg3;
- (id)fetchReminderWithExternalIdentifier:(id)arg1 inList:(id)arg2 error:(id *)arg3;
- (id)fetchRemindersCountWithListID:(id)arg1 error:(id *)arg2;
- (id)fetchRemindersWithObjectIDs:(id)arg1 includeMarkedForDelete:(BOOL)arg2 error:(id *)arg3;
- (id)fetchRemindersWithParentReminderIDs:(id)arg1 error:(id *)arg2;
- (id)fetchRemindersWithObjectIDs:(id)arg1 error:(id *)arg2;
- (id)fetchReminderIncludingMarkedForDeleteWithObjectID:(id)arg1 error:(id *)arg2;
- (id)fetchReminderWithObjectID:(id)arg1 error:(id *)arg2;
- (id)fetchRemindersWithParentReminderID:(id)arg1 error:(id *)arg2;
- (id)fetchRemindersWithListID:(id)arg1 includingSubtasks:(BOOL)arg2 error:(id *)arg3;
- (id)initWithStore:(id)arg1;

@end

