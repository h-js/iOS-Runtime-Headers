/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class PBOutlineBulletDictionary, ESDRoot, NSArray, OADTextListStyle, PBOfficeArtState, PDSlideBase, NSMutableArray, ESDObject, PDPresentation;

@interface PBPresentationState : NSObject {
    struct PptBinaryReader { int (**x1)(); int (**x2)(); struct EshObjectFactory {} *x3; /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*x4; struct __sFILE {} *x5; struct SsrwOORootStorage { 
            struct _Storage {} *m_pStorage; 
            unsigned short m_pBuffer[36]; 
            struct _RootStorage {} *m_pRootStorage; 
        } x6; struct SsrwOOStorage {} *x7; struct SsrwOOStorage {} *x8; struct SsrwOOStream {} *x9; struct SsrwOOStream {} *x10; NSInteger x11; void*x12; struct PptEshReader {} *x13; struct PptEshReader {} *x14; struct PptParserVisitor {} *x15; struct PptPersistDir {} *x16; struct EshHeader {} *x17; struct EshObject {} *x18; NSUInteger x19; NSUInteger x20; NSUInteger x21; NSUInteger x22; NSUInteger x23; NSUInteger x24; struct ChMap<ChUINT4,PptBinaryReader::SKIP_CONDITIONS,CsLess<ChUINT4> > { 
            struct map<ChUINT4,PptBinaryReader::SKIP_CONDITIONS,CsLess<ChUINT4>,std::allocator<std::pair<const ChUINT4, PptBinaryReader::SKIP_CONDITIONS> > > { 
                struct _Rb_tree<ChUINT4,std::pair<const ChUINT4, PptBinaryReader::SKIP_CONDITIONS>,std::_Select1st<std::pair<const ChUINT4, PptBinaryReader::SKIP_CONDITIONS> >,CsLess<ChUINT4>,std::allocator<std::pair<const ChUINT4, PptBinaryReader::SKIP_CONDITIONS> > > { 
                    struct _Rb_tree_impl<CsLess<ChUINT4>,false> { 
                        struct CsLess<ChUINT4> { } _M_key_compare; 
                        struct _Rb_tree_node_base { 
                            NSInteger _M_color; 
                            struct _Rb_tree_node_base {} *_M_parent; 
                            struct _Rb_tree_node_base {} *_M_left; 
                            struct _Rb_tree_node_base {} *_M_right; 
                        } _M_header; 
                        NSUInteger _M_node_count; 
                    } _M_impl; 
                } _M_t; 
            } m_map; 
        } x25; struct PptObjectFactory {} *x26; struct EshMark {} *x27; NSInteger x28; struct ChVector<ChPair<ChUINT4, EscherObjectEnums> > { 
            struct ChPair<ChUINT4,EscherObjectEnums> {} *m_vector; 
            struct ChPair<ChUINT4,EscherObjectEnums> {} *m_tmpVector; 
            NSUInteger m_count; 
            NSUInteger m_size; 
            NSUInteger m_blockSize; 
     /* Encoded args for previous method: @16@0:4^{PptBinaryReader=^^?^^?^{EshObjectFactory}B^{__sFILE}{SsrwOORootStorage=^{_Storage}[36S]^{_RootStorage}}^{SsrwOOStorage}^{SsrwOOStorage}^{SsrwOOStream}^{SsrwOOStream}iB^{PptEshReader}^{PptEshReader}^{PptParserVisitor}^{PptPersistDir}^{EshHeader}^{EshObject}IIIIII{ChMap<ChUINT4,PptBinaryReader::SKIP_CONDITIONS,CsLess<ChUINT4> >={map<ChUINT4,PptBinaryReader::SKIP_CONDITIONS,CsLess<ChUINT4>,std::allocator<std::pair<const ChUINT4, PptBinaryReader::SKIP_CONDITIONS> > >={_Rb_tree<ChUINT4,std::pair<const ChUINT4, PptBinaryReader::SKIP_CONDITIONS>,std::_Select1st<std::pair<const ChUINT4, PptBinaryReader::SKIP_CONDITIONS> >,CsLess<ChUINT4>,std::allocator<std::pair<const ChUINT4, PptBinaryReader::SKIP_CONDITIONS> > >={_Rb_tree_impl<CsLess<ChUINT4>,false>={CsLess<ChUINT4>=}{_Rb_tree_node_base=i^{_Rb_tree_node_base}^{_Rb_tree_node_base}^{_Rb_tree_node_base}}I}}}}^{PptObjectFactory}^{EshMark}i{ChVector<ChPair<ChUINT4, EscherObjectEnums> >=^{ChPair<ChUINT4,EscherObjectEnums>}^{ChPair<ChUINT4,EscherObjectEnums>}III}*I}8@12 */
     /* Encoded args for previous method: ^{PptBinaryReader=^^?^^?^{EshObjectFactory}B^{__sFILE}{SsrwOORootStorage=^{_Storage}[36S]^{_RootStorage}}^{SsrwOOStorage}^{SsrwOOStorage}^{SsrwOOStream}^{SsrwOOStream}iB^{PptEshReader}^{PptEshReader}^{PptParserVisitor}^{PptPersistDir}^{EshHeader}^{EshObject}IIIIII{ChMap<ChUINT4,PptBinaryReader::SKIP_CONDITIONS,CsLess<ChUINT4> >={map<ChUINT4,PptBinaryReader::SKIP_CONDITIONS,CsLess<ChUINT4>,std::allocator<std::pair<const ChUINT4, PptBinaryReader::SKIP_CONDITIONS> > >={_Rb_tree<ChUINT4,std::pair<const ChUINT4, PptBinaryReader::SKIP_CONDITIONS>,std::_Select1st<std::pair<const ChUINT4, PptBinaryReader::SKIP_CONDITIONS> >,CsLess<ChUINT4>,std::allocator<std::pair<const ChUINT4, PptBinaryReader::SKIP_CONDITIONS> > >={_Rb_tree_impl<CsLess<ChUINT4>,false>={CsLess<ChUINT4>=}{_Rb_tree_node_base=i^{_Rb_tree_node_base}^{_Rb_tree_node_base}^{_Rb_tree_node_base}}I}}}}^{PptObjectFactory}^{EshMark}i{ChVector<ChPair<ChUINT4, EscherObjectEnums> >=^{ChPair<ChUINT4,EscherObjectEnums>}^{ChPair<ChUINT4,EscherObjectEnums>}III}*I}8@0:4 */
    OADTextListStyle *mBaseTextListStyle;
    NSMutableArray *mBulletBlips;
    NSUInteger mBulletIndex;
    ESDObject *mCurrentBulletStyle;
    ESDObject *mCurrentMacCharStyle;
    ESDRoot *mDocumentRoot;
    NSMutableArray *mFontEntities;
    BOOL mHasCharacterPropertyBulletIndex;
    PBOfficeArtState *mOfficeArtState;
    PBOutlineBulletDictionary *mPlaceholderBulletStyles;
    PBOutlineBulletDictionary *mPlaceholderMacCharStyles;
    NSArray *mPlaceholderTexts;
        } x29; char *x30; NSUInteger x31; } *mPptBinaryReader;
    NSMutableArray *mSlideIndexes;
    NSUInteger mTextLength;
    PDPresentation *mTgtPresentation;
    PDSlideBase *mTgtSlide;
}

- (struct PptBinaryReader { int (**x1)(); int (**x2)(); struct EshObjectFactory {} *x3; /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*x4; struct __sFILE {} *x5; struct SsrwOORootStorage { struct _Storage {} *x_6_1_1; unsigned short x_6_1_2[36]; struct _RootStorage {} *x_6_1_3; } x6; struct SsrwOOStorage {} *x7; struct SsrwOOStorage {} *x8; struct SsrwOOStream {} *x9; struct SsrwOOStream {} *x10; NSInteger x11; void*x12; struct PptEshReader {} *x13; struct PptEshReader {} *x14; struct PptParserVisitor {} *x15; struct PptPersistDir {} *x16; struct EshHeader {} *x17; struct EshObject {} *x18; NSUInteger x19; NSUInteger x20; NSUInteger x21; NSUInteger x22; NSUInteger x23; NSUInteger x24; struct ChMap<ChUINT4,PptBinaryReader::SKIP_CONDITIONS,CsLess<ChUINT4> > { struct map<ChUINT4,PptBinaryReader::SKIP_CONDITIONS,CsLess<ChUINT4>,std::allocator<std::pair<const ChUINT4, PptBinaryReader::SKIP_CONDITIONS> > > { struct _Rb_tree<ChUINT4,std::pair<const ChUINT4, PptBinaryReader::SKIP_CONDITIONS>,std::_Select1st<std::pair<const ChUINT4, PptBinaryReader::SKIP_CONDITIONS> >,CsLess<ChUINT4>,std::allocator<std::pair<const ChUINT4, PptBinaryReader::SKIP_CONDITIONS> > > { struct _Rb_tree_impl<CsLess<ChUINT4>,false> { struct CsLess<ChUINT4> { } x_1_4_1; struct _Rb_tree_node_base { NSInteger x_2_5_1; struct _Rb_tree_node_base {} *x_2_5_2; struct _Rb_tree_node_base {} *x_2_5_3; struct _Rb_tree_node_base {} *x_2_5_4; } x_1_4_2; NSUInteger x_1_4_3; } x_1_3_1; } x_1_2_1; } x_25_1_1; } x25; struct PptObjectFactory {} *x26; struct EshMark {} *x27; NSInteger x28; struct ChVector<ChPair<ChUINT4, EscherObjectEnums> > { struct ChPair<ChUINT4,EscherObjectEnums> {} *x_29_1_1; struct ChPair<ChUINT4,EscherObjectEnums> {} *x_29_1_2; NSUInteger x_29_1_3; NSUInteger x_29_1_4; NSUInteger x_29_1_5; } x29; char *x30; NSUInteger x31; }*)reader;
- (void)addBulletBlip:(id)arg1;
- (void)addFontEntity:(id)arg1 charSet:(NSInteger)arg2 type:(NSInteger)arg3 family:(NSInteger)arg4;
- (void)addSlideIndex:(NSInteger)arg1;
- (id)baseTextListStyle;
- (id)bulletBlipAtIndex:(NSUInteger)arg1;
- (NSUInteger)bulletBlipCount;
- (NSUInteger)bulletIndex;
- (id)currentBulletStyle;
- (id)currentMacCharStyle;
- (void)dealloc;
- (id)documentRoot;
- (id)fontEntityAtIndex:(NSUInteger)arg1;
- (NSUInteger)fontEntityCount;
- (NSInteger)getSlideIndexAt:(NSInteger)arg1;
- (BOOL)hasCharacterPropertyBulletIndex;
- (id)initWithReader:(struct PptBinaryReader { int (**x1)(); int (**x2)(); struct EshObjectFactory {} *x3; /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*x4; struct __sFILE {} *x5; struct SsrwOORootStorage { struct _Storage {} *x_6_1_1; unsigned short x_6_1_2[36]; struct _RootStorage {} *x_6_1_3; } x6; struct SsrwOOStorage {} *x7; struct SsrwOOStorage {} *x8; struct SsrwOOStream {} *x9; struct SsrwOOStream {} *x10; NSInteger x11; void*x12; struct PptEshReader {} *x13; struct PptEshReader {} *x14; struct PptParserVisitor {} *x15; struct PptPersistDir {} *x16; struct EshHeader {} *x17; struct EshObject {} *x18; NSUInteger x19; NSUInteger x20; NSUInteger x21; NSUInteger x22; NSUInteger x23; NSUInteger x24; struct ChMap<ChUINT4,PptBinaryReader::SKIP_CONDITIONS,CsLess<ChUINT4> > { struct map<ChUINT4,PptBinaryReader::SKIP_CONDITIONS,CsLess<ChUINT4>,std::allocator<std::pair<const ChUINT4, PptBinaryReader::SKIP_CONDITIONS> > > { struct _Rb_tree<ChUINT4,std::pair<const ChUINT4, PptBinaryReader::SKIP_CONDITIONS>,std::_Select1st<std::pair<const ChUINT4, PptBinaryReader::SKIP_CONDITIONS> >,CsLess<ChUINT4>,std::allocator<std::pair<const ChUINT4, PptBinaryReader::SKIP_CONDITIONS> > > { struct _Rb_tree_impl<CsLess<ChUINT4>,false> { struct CsLess<ChUINT4> { } x_1_4_1; struct _Rb_tree_node_base { NSInteger x_2_5_1; struct _Rb_tree_node_base {} *x_2_5_2; struct _Rb_tree_node_base {} *x_2_5_3; struct _Rb_tree_node_base {} *x_2_5_4; } x_1_4_2; NSUInteger x_1_4_3; } x_1_3_1; } x_1_2_1; } x_25_1_1; } x25; struct PptObjectFactory {} *x26; struct EshMark {} *x27; NSInteger x28; struct ChVector<ChPair<ChUINT4, EscherObjectEnums> > { struct ChPair<ChUINT4,EscherObjectEnums> {} *x_29_1_1; struct ChPair<ChUINT4,EscherObjectEnums> {} *x_29_1_2; NSUInteger x_29_1_3; NSUInteger x_29_1_4; NSUInteger x_29_1_5; } x29; char *x30; NSUInteger x31; }*)arg1 tgtPresentation:(id)arg2;
- (NSInteger)numberOfSlideIndexes;
- (id)officeArtState;
- (id)placeholderTexts;
- (void)setBaseTextListStyle:(id)arg1;
- (void)setBulletIndex:(NSUInteger)arg1;
- (void)setCurrentBulletStyle:(id)arg1 macCharStyle:(id)arg2;
- (void)setCurrentSlideId:(NSUInteger)arg1 textType:(NSInteger)arg2;
- (void)setDocumentRoot:(id)arg1;
- (void)setHasCharacterPropertyBulletIndex:(BOOL)arg1;
- (void)setPlaceholderBulletStyles:(id)arg1;
- (void)setPlaceholderMacCharStyles:(id)arg1;
- (void)setPlaceholderTexts:(id)arg1;
- (void)setTextLength:(NSUInteger)arg1;
- (void)setTgtSlide:(id)arg1;
- (id)slideIndexesRef;
- (NSUInteger)textLength;
- (id)tgtPresentation;
- (id)tgtSlide;

@end
