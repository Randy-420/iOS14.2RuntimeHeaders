/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TrialServer.framework/TrialServer
 */

@interface TRIExperimentDatabase : NSObject {
    TRIDatabase * _db;
}

- (void).cxx_destruct;
- (bool)_enumerateExperimentRecordsMatchingWhereClause:(id)arg1 bind:(id /* block */)arg2 block:(id /* block */)arg3;
- (id)activeExperimentRecordWithTreatmentId:(id)arg1;
- (unsigned long long)addExperimentWithExperimentDeployment:(id)arg1 type:(int)arg2 status:(long long)arg3 startDate:(id)arg4 endDate:(id)arg5 namespaces:(id)arg6;
- (bool)enumerateExperimentRecordsMatchingExperimentId:(id)arg1 block:(id /* block */)arg2;
- (bool)enumerateExperimentRecordsMatchingStatuses:(id)arg1 block:(id /* block */)arg2;
- (bool)enumerateExperimentRecordsWithBlock:(id /* block */)arg1;
- (bool)enumerateNamespaceRecordsForExperimentDeployment:(id)arg1 usingTransaction:(id)arg2 block:(id /* block */)arg3;
- (id)experimentRecordWithExperimentDeployment:(id)arg1;
- (id)init;
- (id)initWithDatabase:(id)arg1;
- (bool)namespacesAreAvailableForExperimentId:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 namespaces:(id)arg4;
- (struct _PASDBTransactionCompletion_ { bool x1; })readTransactionWithFailableBlock:(id /* block */)arg1;
- (unsigned long long)removeExperimentRecordWithExperimentDeployment:(id)arg1;
- (bool)setStatus:(long long)arg1 forExperimentDeployment:(id)arg2 usingTransaction:(id)arg3;
- (bool)setTreatmentId:(id)arg1 forExperimentDeployment:(id)arg2 usingTransaction:(id)arg3;
- (bool)setTreatmentURL:(id)arg1 forExperimentDeployment:(id)arg2 namespaceName:(id)arg3;
- (id)treatmentURLsForExperimentDeployment:(id)arg1 usingTransaction:(id)arg2;
- (struct _PASDBTransactionCompletion_ { bool x1; })writeTransactionWithFailableBlock:(id /* block */)arg1;

@end
