/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

@interface AMSMetricsDatabase : NSObject <AMSSQLiteConnectionDelegate> {
    AMSSQLiteConnection * _connection;
    NSString * _containerId;
    NSObject<OS_dispatch_queue> * _internalQueue;
    long long  _keepAliveCount;
}

@property (nonatomic, retain) AMSSQLiteConnection *connection;
@property (nonatomic, retain) NSString *containerId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *internalQueue;
@property (nonatomic) long long keepAliveCount;
@property (readonly) Class superclass;

+ (id)sharedDatabaseWithContainerId:(id)arg1;

- (void).cxx_destruct;
- (id)_lockedById;
- (void)_performTransaction:(id /* block */)arg1;
- (void)cleanupInvalidIdentifiersWithError:(id*)arg1;
- (void)close;
- (id)connection;
- (bool)connectionNeedsResetForCorruption:(id)arg1;
- (id)containerId;
- (long long)countAllEventsWithLockKey:(id)arg1 error:(id*)arg2;
- (void)dealloc;
- (void)dropAllEventsWithLockKey:(id)arg1 error:(id*)arg2;
- (void)dropEvents:(id)arg1 error:(id*)arg2;
- (void)enumerateEventsWithTopic:(id)arg1 lockKey:(id)arg2 objectBlock:(id /* block */)arg3;
- (id)identifierForKey:(id)arg1 account:(id)arg2 error:(id*)arg3;
- (id)initWithContainerId:(id)arg1;
- (void)insertEvents:(id)arg1 error:(id*)arg2;
- (id)internalQueue;
- (long long)keepAliveCount;
- (id)lockAllEventsWithError:(id*)arg1;
- (void)removeIdentifiersForAccount:(id)arg1 error:(id*)arg2;
- (void)setConnection:(id)arg1;
- (void)setContainerId:(id)arg1;
- (void)setIdentifier:(id)arg1 forKey:(id)arg2 account:(id)arg3 duration:(double)arg4 error:(id*)arg5;
- (void)setInternalQueue:(id)arg1;
- (void)setKeepAliveCount:(long long)arg1;
- (void)unlockAllEventsWithKey:(id)arg1 error:(id*)arg2;
- (void)unlockEvents:(id)arg1 error:(id*)arg2;

@end