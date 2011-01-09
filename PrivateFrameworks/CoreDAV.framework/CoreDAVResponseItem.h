/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@class CoreDAVLeafItem, NSMutableSet, CoreDAVErrorItem, CoreDAVItemWithHrefChildItem, NSMutableArray;



@interface CoreDAVResponseItem : CoreDAVItem 
{
    NSMutableArray *_hrefs;
    CoreDAVLeafItem *_status;
    NSMutableSet *_propStats;
    CoreDAVErrorItem *_errorItem;
    CoreDAVLeafItem *_responseDescription;
    CoreDAVItemWithHrefChildItem *_location;
}

@property(retain) CoreDAVItemWithHrefChildItem *location;
@property(retain) CoreDAVLeafItem *responseDescription;
@property(retain) CoreDAVErrorItem *errorItem;
@property(retain) NSMutableSet *propStats;
@property(retain) CoreDAVLeafItem *status;
@property(retain) NSMutableArray *hrefs;


- (id)status;
- (void)addPropStat:(id)arg1;
- (void)addHref:(id)arg1;
- (void)generateItemTreeString:(id)arg1 withDepth:(NSUInteger)arg2;
- (id)responseDescription;
- (void)setResponseDescription:(id)arg1;
- (void)setErrorItem:(id)arg1;
- (id)propStats;
- (void)setPropStats:(id)arg1;
- (void)setHrefs:(id)arg1;
- (BOOL)hasPropertyError;
- (id)copyParseRules;
- (id)errorItem;
- (id)hrefs;
- (id)firstHref;
- (id)initWithNameSpace:(id)arg1 andName:(id)arg2;
- (id)successfulPropertiesToValues;
- (void)setStatus:(id)arg1;
- (id)location;
- (void)setLocation:(id)arg1;
- (id)description;
- (void)dealloc;

@end