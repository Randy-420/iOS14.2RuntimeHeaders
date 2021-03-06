/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDCloudSyncManagerTask : NSObject {
    id /* block */  _completion;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSArray * _mirroringTasks;
    HDCloudSyncManagerTask * _originalTask;
    NSProgress * _progress;
    long long  _status;
}

@property (readonly, copy) NSArray *mirroringTasks;
@property (readonly) HDCloudSyncManagerTask *originalTask;
@property (readonly) NSProgress *progress;
@property (readonly) long long status;

- (void).cxx_destruct;
- (void)_addMirroringTask:(id)arg1;
- (bool)combineWithTask:(id)arg1;
- (void)finish;
- (id)init;
- (void)main;
- (void)mirrorTask:(id)arg1;
- (id)mirroringTasks;
- (id)originalTask;
- (id)progress;
- (void)startWithCompletion:(id /* block */)arg1;
- (long long)status;

@end
