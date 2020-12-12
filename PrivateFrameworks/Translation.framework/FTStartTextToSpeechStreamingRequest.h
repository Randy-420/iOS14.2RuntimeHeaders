/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Translation.framework/Translation
 */

@interface FTStartTextToSpeechStreamingRequest : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSData * _data;
    const struct StartTextToSpeechStreamingRequest { unsigned char x1[1]; } * _root;
    NSMutableDictionary * _storage;
}

@property (nonatomic, readonly) long long audio_type;
@property (nonatomic, readonly) FTTextToSpeechRequestContext *context;
@property (nonatomic, readonly) NSArray *context_info;
@property (nonatomic, readonly) FTTextToSpeechRequestDebug *debug;
@property (nonatomic, readonly) bool enable_word_timing_info;
@property (nonatomic, readonly) FTTextToSpeechRequestExperiment *experiment;
@property (nonatomic, readonly) FTTTSRequestFeatureFlags *feature_flags;
@property (nonatomic, readonly) NSString *gender;
@property (nonatomic, readonly) NSString *language;
@property (nonatomic, readonly) FTTextToSpeechRequestMeta *meta_info;
@property (nonatomic, readonly) long long preferred_voice_type;
@property (nonatomic, readonly) FTTextToSpeechUserProfile *profile;
@property (nonatomic, readonly) NSString *session_id;
@property (nonatomic, readonly) NSString *speech_id;
@property (nonatomic, readonly) NSString *stream_id;
@property (nonatomic, readonly) NSString *text;
@property (nonatomic, readonly) NSString *voice_name;

- (void).cxx_destruct;
- (struct Offset<siri::speech::schema_fb::StartTextToSpeechStreamingRequest> { unsigned int x1; })addObjectToBuffer:(struct FlatBufferBuilder { struct vector_downward { struct Allocator {} *x_1_1_1; bool x_1_1_2; unsigned long long x_1_1_3; unsigned long long x_1_1_4; unsigned long long x_1_1_5; char *x_1_1_6; char *x_1_1_7; char *x_1_1_8; } x1; unsigned int x2; unsigned short x3; bool x4; bool x5; unsigned long long x6; bool x7; bool x8; struct set<flatbuffers::Offset<flatbuffers::String>, flatbuffers::FlatBufferBuilder::StringOffsetCompare, std::__1::allocator<flatbuffers::Offset<flatbuffers::String> > > {} *x9; }*)arg1;
- (long long)audio_type;
- (id)context;
- (id)context_info;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debug;
- (bool)enable_word_timing_info;
- (id)experiment;
- (id)feature_flags;
- (id)flatbuffData;
- (id)gender;
- (id)initAndVerifyWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct StartTextToSpeechStreamingRequest { unsigned char x1[1]; }*)arg2;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct StartTextToSpeechStreamingRequest { unsigned char x1[1]; }*)arg2 verify:(bool)arg3;
- (id)language;
- (id)meta_info;
- (long long)preferred_voice_type;
- (id)profile;
- (id)session_id;
- (id)speech_id;
- (id)stream_id;
- (id)text;
- (id)voice_name;

@end