/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDPopularNearbySearchResult : PBCodable <NSCopying> {
    GEOMapRegion * _displayMapRegion;
    struct { 
        unsigned int has_isChainResultSet : 1; 
        unsigned int read_unknownFields : 1; 
        unsigned int read_displayMapRegion : 1; 
        unsigned int read_sectionHeader : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    bool  _isChainResultSet;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    NSString * _sectionHeader;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) GEOMapRegion *displayMapRegion;
@property (nonatomic, readonly) bool hasDisplayMapRegion;
@property (nonatomic) bool hasIsChainResultSet;
@property (nonatomic, readonly) bool hasSectionHeader;
@property (nonatomic) bool isChainResultSet;
@property (nonatomic, retain) NSString *sectionHeader;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)displayMapRegion;
- (bool)hasDisplayMapRegion;
- (bool)hasIsChainResultSet;
- (bool)hasSectionHeader;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isChainResultSet;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (id)sectionHeader;
- (void)setDisplayMapRegion:(id)arg1;
- (void)setHasIsChainResultSet:(bool)arg1;
- (void)setIsChainResultSet:(bool)arg1;
- (void)setSectionHeader:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end