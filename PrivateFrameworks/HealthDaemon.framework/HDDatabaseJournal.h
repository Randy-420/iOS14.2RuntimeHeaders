/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDDatabaseJournal : NSObject {
    NSURL * _URL;
    HDDatabaseTransaction * _activeMergeTransaction;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _activeTransactionLock;
    <HDJournalChapter> * _currentJournalChapter;
    <HDDatabaseJournalDelegate> * _delegate;
    bool  _interrupted;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _interruptionLock;
    bool  _invalidated;
    NSLock * _journalLock;
    long long  _journalStatus;
    Class  _lastInsertedEntryClass;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _progressLock;
    NSProgress * _progressLock_internalProgress;
    NSProgress * _progressLock_observableProgress;
    long long  _type;
}

@property (nonatomic, copy) NSURL *URL;
@property (nonatomic, retain) <HDJournalChapter> *currentJournalChapter;
@property (nonatomic) <HDDatabaseJournalDelegate> *delegate;
@property (nonatomic, retain) NSLock *journalLock;
@property (nonatomic, readonly) long long type;

- (void).cxx_destruct;
- (id)URL;
- (bool)_appendData:(id)arg1 entryClass:(Class)arg2 error:(id*)arg3;
- (bool)_createNextJournalChapterWithError:(id*)arg1;
- (void)_executeAtomically:(id /* block */)arg1;
- (bool)_isJournalDatabaseFeatureEnabled;
- (unsigned int)_mergeJournalChapter:(id)arg1 profile:(id)arg2 accessibilityAssertion:(id)arg3;
- (void)_mergeJournalEntries:(id)arg1 profile:(id)arg2;
- (id)_mergeTransactionContextWithContext:(id)arg1;
- (bool)_performPostJournalMergeWithVersion:(unsigned int)arg1 profile:(id)arg2 transaction:(id)arg3 error:(id*)arg4;
- (bool)_processJournalChaptersWithProfile:(id)arg1;
- (bool)_setActiveTransactionAndReturnInterrupted:(id)arg1;
- (void)_unitTesting_closeCurrentJournalChapter;
- (id)_unitTesting_directoryURL;
- (void)_unitTesting_setJournalStatusRequiresMerge;
- (void)_waitIfInterrupted;
- (bool)addJournalEntries:(id)arg1 profile:(id)arg2 error:(id*)arg3;
- (id)currentJournalChapter;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (id)init;
- (id)initWithType:(long long)arg1 path:(id)arg2;
- (void)interruptJournalMerge;
- (void)invalidate;
- (long long)journalChapterCount;
- (id)journalLock;
- (void)lock;
- (bool)mergeWithProfile:(id)arg1;
- (bool)performMergeTransactionWithProfile:(id)arg1 transactionContext:(id)arg2 error:(id*)arg3 block:(id /* block */)arg4;
- (id)progressForJournalMerge;
- (void)resumeJournalMerge;
- (void)setCurrentJournalChapter:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setJournalLock:(id)arg1;
- (void)setURL:(id)arg1;
- (unsigned long long)sizeOnDisk;
- (long long)type;
- (void)unlock;

@end