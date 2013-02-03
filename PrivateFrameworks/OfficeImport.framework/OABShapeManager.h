/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@interface OABShapeManager : OABShapeBaseManager <OABPropertiesManager> {
    struct EshShape { int (**x1)(); unsigned short x2; struct EshContentData { 
            struct EshOpt { 
                int (**_vptr$EshObject)(); 
                unsigned short m_unType; 
                struct EshHeader { 
                    NSInteger m_lLength; 
                    NSUInteger m_ulOffset; 
                    short m_nInstance; 
                    unsigned short m_unType; 
                    unsigned char m_bVersion; 
                } m_header; 
                struct ChMap<ChUINT4,EshOpt::Value,CsLess<ChUINT4> > { 
                    struct map<ChUINT4,EshOpt::Value,CsLess<ChUINT4>,std::allocator<std::pair<const ChUINT4, EshOpt::Value> > > { 
                        struct _Rb_tree<ChUINT4,std::pair<const ChUINT4, EshOpt::Value>,std::_Select1st<std::pair<const ChUINT4, EshOpt::Value> >,CsLess<ChUINT4>,std::allocator<std::pair<const ChUINT4, EshOpt::Value> > > { 
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
                } m_data; 
                struct EshColor { 
                    struct Data { 
                        NSInteger m_type; 
                        union Value { 
                            struct RGB { 
                                unsigned char m_bRed; 
                                unsigned char m_bGreen; 
                                unsigned char m_bBlue; 
                            } m_rgb; 
                            unsigned short m_schemeIndex; 
                            unsigned short m_paletteIndex; 
                            struct AdjustedColor { 
                                unsigned char m_refColor; 
                                unsigned char m_bParam; 
                                unsigned int m_adjust : 4; 
                                unsigned int m_isInvert : 1; 
                                unsigned int m_isInvert128 : 1; 
                                unsigned int m_isGray : 1; 
                            } m_adjustedColor; 
                        } m_value; 
                    } m_data; 
                } m_color; 
            } m_optB; 
            struct EshOpt { 
                int (**_vptr$EshObject)(); 
                unsigned short m_unType; 
                struct EshHeader { 
                    NSInteger m_lLength; 
                    NSUInteger m_ulOffset; 
                    short m_nInstance; 
                    unsigned short m_unType; 
                    unsigned char m_bVersion; 
                } m_header; 
                struct ChMap<ChUINT4,EshOpt::Value,CsLess<ChUINT4> > { 
                    struct map<ChUINT4,EshOpt::Value,CsLess<ChUINT4>,std::allocator<std::pair<const ChUINT4, EshOpt::Value> > > { 
                        struct _Rb_tree<ChUINT4,std::pair<const ChUINT4, EshOpt::Value>,std::_Select1st<std::pair<const ChUINT4, EshOpt::Value> >,CsLess<ChUINT4>,std::allocator<std::pair<const ChUINT4, EshOpt::Value> > > { 
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
                } m_data; 
                struct EshColor { 
                    struct Data { 
                        NSInteger m_type; 
                        union Value { 
                            struct RGB { 
                                unsigned char m_bRed; 
                                unsigned char m_bGreen; 
                                unsigned char m_bBlue; 
                            } m_rgb; 
                            unsigned short m_schemeIndex; 
                            unsigned short m_paletteIndex; 
                            struct AdjustedColor { 
                                unsigned char m_refColor; 
                                unsigned char m_bParam; 
                                unsigned int m_adjust : 4; 
                                unsigned int m_isInvert : 1; 
                                unsigned int m_isInvert128 : 1; 
                                unsigned int m_isGray : 1; 
                            } m_adjustedColor; 
                        } m_value; 
                    } m_data; 
                } m_color; 
            } m_optX; 
            struct EshSp { 
                int (**_vptr$EshObject)(); 
                unsigned short m_unType; 
                struct EshHeader { 
                    NSInteger m_lLength; 
                    NSUInteger m_ulOffset; 
                    short m_nInstance; 
                    unsigned short m_unType; 
                    unsigned char m_bVersion; 
                } m_header; 
                NSUInteger m_ulSpid; 
                /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*m_isGroup; 
                void*m_isChild; 
                void*m_isPatriarch; 
                void*m_isDeleted; 
                void*m_isOleShape; 
                void*m_isHaveMaster; 
                void*m_isFlipH; 
                void*m_isFlipV; 
                void*m_isConnector; 
                void*m_isHaveAnchor; 
                void*m_isBackground; 
                void*m_isHaveSpt; 
            } m_sp; 
            struct CsRect<ChSINT4> { 
                NSInteger m_data[4]; 
            } m_anchor; 
        } x3; struct EshTextBox { 
            int (**_vptr$EshObject)(); 
            unsigned short m_unType; 
            struct EshContentData {} *m_data; 
        } x4; struct EshFill { 
            int (**_vptr$EshObject)(); 
            unsigned short m_unType; 
            struct EshContentData {} *m_data; 
        } x5; struct EshStroke { 
            int (**_vptr$EshObject)(); 
            unsigned short m_unType; 
            struct EshContentData {} *m_data; 
        } x6; struct EshShadow { 
            int (**_vptr$EshObject)(); 
            unsigned short m_unType; 
            struct EshContentData {} *m_data; 
        } x7; struct EshExtrusion { 
            int (**_vptr$EshObject)(); 
            unsigned short m_unType; 
            struct EshContentData {} *m_data; 
        } x8; struct EshCallout { 
            int (**_vptr$EshObject)(); 
            unsigned short m_unType; 
            struct EshContentData {} *m_data; 
        } x9; int (**x10)(); struct EshShapeProperties { 
            int (**_vptr$EshObject)(); 
            unsigned short m_unType; 
            struct EshContentData {} *m_data; 
            int (**_vptr$EshBackgroundProperties)(); 
        } x11; struct EshShapeLocks { 
            int (**_vptr$EshObject)(); 
            unsigned short m_unType; 
            struct EshContentData {} *m_data; 
        } x12; struct EshShapeImageData { 
            int (**_vptr$EshObject)(); 
            unsigned short m_unType; 
            struct EshContentData {} *m_data; 
        } x13; struct EshTextPath { 
            int (**_vptr$EshObject)(); 
            unsigned short m_unType; 
            struct EshContentData {} *m_data; 
        } x14; struct EshPath { 
            int (**_vptr$EshObject)(); 
            unsigned short m_unType; 
            struct EshContentData {} *m_data; 
        } x15; struct EshSkew { 
            int (**_vptr$EshObject)(); 
            unsigned short m_unType; 
            struct EshContentData {} *m_data; 
        } x16; struct EshQuickTimeData { 
            int (**_vptr$EshObject)(); 
            unsigned short m_unType; 
            struct EshHeader { 
                NSInteger m_lLength; 
                NSUInteger m_ulOffset; 
                short m_nInstance; 
                unsigned short m_unType; 
                unsigned char m_bVersion; 
            } m_header; 
            struct OcBinaryData { 
                int (**_vptr$OcBinaryData)(); 
                NSUInteger m_ulStartOffset; 
                NSUInteger m_ulByteCount; 
                NSUInteger m_ulBufferSize; 
                char *m_pBuffer; 
                void*m_isMyBuffer; 
            } m_data; 
     /* Encoded args for previous method: @16@0:4^{EshShape=^^?S{EshContentData={EshOpt=^^?S{EshHeader=iIsSC}{ChMap<ChUINT4,EshOpt::Value,CsLess<ChUINT4> >={map<ChUINT4,EshOpt::Value,CsLess<ChUINT4>,std::allocator<std::pair<const ChUINT4, EshOpt::Value> > >={_Rb_tree<ChUINT4,std::pair<const ChUINT4, EshOpt::Value>,std::_Select1st<std::pair<const ChUINT4, EshOpt::Value> >,CsLess<ChUINT4>,std::allocator<std::pair<const ChUINT4, EshOpt::Value> > >={_Rb_tree_impl<CsLess<ChUINT4>,false>={CsLess<ChUINT4>=}{_Rb_tree_node_base=i^{_Rb_tree_node_base}^{_Rb_tree_node_base}^{_Rb_tree_node_base}}I}}}}{EshColor={Data=i(Value={RGB=CCC}SS{AdjustedColor=CCb4b1b1b1})}}}{EshOpt=^^?S{EshHeader=iIsSC}{ChMap<ChUINT4,EshOpt::Value,CsLess<ChUINT4> >={map<ChUINT4,EshOpt::Value,CsLess<ChUINT4>,std::allocator<std::pair<const ChUINT4, EshOpt::Value> > >={_Rb_tree<ChUINT4,std::pair<const ChUINT4, EshOpt::Value>,std::_Select1st<std::pair<const ChUINT4, EshOpt::Value> >,CsLess<ChUINT4>,std::allocator<std::pair<const ChUINT4, EshOpt::Value> > >={_Rb_tree_impl<CsLess<ChUINT4>,false>={CsLess<ChUINT4>=}{_Rb_tree_node_base=i^{_Rb_tree_node_base}^{_Rb_tree_node_base}^{_Rb_tree_node_base}}I}}}}{EshColor={Data=i(Value={RGB=CCC}SS{AdjustedColor=CCb4b1b1b1})}}}{EshSp=^^?S{EshHeader=iIsSC}IBBBBBBBBBBBB}{CsRect<ChSINT4>=[4i]}}{EshTextBox=^^?S^{EshContentData}}{EshFill=^^?S^{EshContentData}}{EshStroke=^^?S^{EshContentData}}{EshShadow=^^?S^{EshContentData}}{EshExtrusion=^^?S^{EshContentData}}{EshCallout=^^?S^{EshContentData}}^^?{EshShapeProperties=^^?S^{EshContentData}^^?}{EshShapeLocks=^^?S^{EshContentData}}{EshShapeImageData=^^?S^{EshContentData}}{EshTextPath=^^?S^{EshContentData}}{EshPath=^^?S^{EshContentData}}{EshSkew=^^?S^{EshContentData}}{EshQuickTimeData=^^?S{EshHeader=iIsSC}{OcBinaryData=^^?III*B}}}8^{EshShape=^^?S{EshContentData={EshOpt=^^?S{EshHeader=iIsSC}{ChMap<ChUINT4,EshOpt::Value,CsLess<ChUINT4> >={map<ChUINT4,EshOpt::Value,CsLess<ChUINT4>,std::allocator<std::pair<const ChUINT4, EshOpt::Value> > >={_Rb_tree<ChUINT4,std::pair<const ChUINT4, EshOpt::Value>,std::_Select1st<std::pair<const ChUINT4, EshOpt::Value> >,CsLess<ChUINT4>,std::allocator<std::pair<const ChUINT4, EshOpt::Value> > >={_Rb_tree_impl<CsLess<ChUINT4>,false>={CsLess<ChUINT4>=}{_Rb_tree_node_base=i^{_Rb_tree_node_base}^{_Rb_tree_node_base}^{_Rb_tree_node_base}}I}}}}{EshColor={Data=i(Value={RGB=CCC}SS{AdjustedColor=CCb4b1b1b1})}}}{EshOpt=^^?S{EshHeader=iIsSC}{ChMap<ChUINT4,EshOpt::Value,CsLess<ChUINT4> >={map<ChUINT4,EshOpt::Value,CsLess<ChUINT4>,std::allocator<std::pair<const ChUINT4, EshOpt::Value> > >={_Rb_tree<ChUINT4,std::pair<const ChUINT4, EshOpt::Value>,std::_Select1st<std::pair<const ChUINT4, EshOpt::Value> >,CsLess<ChUINT4>,std::allocator<std::pair<const ChUINT4, EshOpt::Value> > >={_Rb_tree_impl<CsLess<ChUINT4>,false>={CsLess<ChUINT4>=}{_Rb_tree_node_base=i^{_Rb_tree_node_base}^{_Rb_tree_node_base}^{_Rb_tree_node_base}}I}}}}{EshColor={Data=i(Value={RGB=CCC}SS{AdjustedColor=CCb4b1b1b1})}}}{EshSp=^^?S{EshHeader=iIsSC}IBBBBBBBBBBBB}{CsRect<ChSINT4>=[4i]}}{EshTextBox=^^?S^{EshContentData}}{EshFill=^^?S^{EshContentData}}{EshStroke=^^?S^{EshContentData}}{EshShadow=^^?S^{EshContentData}}{EshExtrusion=^^?S^{EshContentData}}{EshCallout=^^?S^{EshContentData}}^^?{EshShapeProperties=^^?S^{EshContentData}^^?}{EshShapeLocks=^^?S^{EshContentData}}{EshShapeImageData=^^?S^{EshContentData}}{EshTextPath=^^?S^{EshContentData}}{EshPath=^^?S^{EshContentData}}{EshSkew=^^?S^{EshContentData}}{EshQuickTimeData=^^?S{EshHeader=iIsSC}{OcBinaryData=^^?III*B}}}12 */
     /* Encoded args for previous method: @12@0:4^{EshShape=^^?S{EshContentData={EshOpt=^^?S{EshHeader=iIsSC}{ChMap<ChUINT4,EshOpt::Value,CsLess<ChUINT4> >={map<ChUINT4,EshOpt::Value,CsLess<ChUINT4>,std::allocator<std::pair<const ChUINT4, EshOpt::Value> > >={_Rb_tree<ChUINT4,std::pair<const ChUINT4, EshOpt::Value>,std::_Select1st<std::pair<const ChUINT4, EshOpt::Value> >,CsLess<ChUINT4>,std::allocator<std::pair<const ChUINT4, EshOpt::Value> > >={_Rb_tree_impl<CsLess<ChUINT4>,false>={CsLess<ChUINT4>=}{_Rb_tree_node_base=i^{_Rb_tree_node_base}^{_Rb_tree_node_base}^{_Rb_tree_node_base}}I}}}}{EshColor={Data=i(Value={RGB=CCC}SS{AdjustedColor=CCb4b1b1b1})}}}{EshOpt=^^?S{EshHeader=iIsSC}{ChMap<ChUINT4,EshOpt::Value,CsLess<ChUINT4> >={map<ChUINT4,EshOpt::Value,CsLess<ChUINT4>,std::allocator<std::pair<const ChUINT4, EshOpt::Value> > >={_Rb_tree<ChUINT4,std::pair<const ChUINT4, EshOpt::Value>,std::_Select1st<std::pair<const ChUINT4, EshOpt::Value> >,CsLess<ChUINT4>,std::allocator<std::pair<const ChUINT4, EshOpt::Value> > >={_Rb_tree_impl<CsLess<ChUINT4>,false>={CsLess<ChUINT4>=}{_Rb_tree_node_base=i^{_Rb_tree_node_base}^{_Rb_tree_node_base}^{_Rb_tree_node_base}}I}}}}{EshColor={Data=i(Value={RGB=CCC}SS{AdjustedColor=CCb4b1b1b1})}}}{EshSp=^^?S{EshHeader=iIsSC}IBBBBBBBBBBBB}{CsRect<ChSINT4>=[4i]}}{EshTextBox=^^?S^{EshContentData}}{EshFill=^^?S^{EshContentData}}{EshStroke=^^?S^{EshContentData}}{EshShadow=^^?S^{EshContentData}}{EshExtrusion=^^?S^{EshContentData}}{EshCallout=^^?S^{EshContentData}}^^?{EshShapeProperties=^^?S^{EshContentData}^^?}{EshShapeLocks=^^?S^{EshContentData}}{EshShapeImageData=^^?S^{EshContentData}}{EshTextPath=^^?S^{EshContentData}}{EshPath=^^?S^{EshContentData}}{EshSkew=^^?S^{EshContentData}}{EshQuickTimeData=^^?S{EshHeader=iIsSC}{OcBinaryData=^^?III*B}}}8 */
        } x17; } *mShape;
}

- (BOOL)hidden;
- (id)initWithShape:(struct EshShape { int (**x1)(); unsigned short x2; struct EshContentData { struct EshOpt { int (**x_1_2_1)(); unsigned short x_1_2_2; struct EshHeader { NSInteger x_3_3_1; NSUInteger x_3_3_2; short x_3_3_3; unsigned short x_3_3_4; unsigned char x_3_3_5; } x_1_2_3; struct ChMap<ChUINT4,EshOpt::Value,CsLess<ChUINT4> > { struct map<ChUINT4,EshOpt::Value,CsLess<ChUINT4>,std::allocator<std::pair<const ChUINT4, EshOpt::Value> > > { struct _Rb_tree<ChUINT4,std::pair<const ChUINT4, EshOpt::Value>,std::_Select1st<std::pair<const ChUINT4, EshOpt::Value> >,CsLess<ChUINT4>,std::allocator<std::pair<const ChUINT4, EshOpt::Value> > > { struct _Rb_tree_impl<CsLess<ChUINT4>,false> { struct CsLess<ChUINT4> { } x_1_6_1; struct _Rb_tree_node_base { NSInteger x_2_7_1; struct _Rb_tree_node_base {} *x_2_7_2; struct _Rb_tree_node_base {} *x_2_7_3; struct _Rb_tree_node_base {} *x_2_7_4; } x_1_6_2; NSUInteger x_1_6_3; } x_1_5_1; } x_1_4_1; } x_4_3_1; } x_1_2_4; struct EshColor { struct Data { NSInteger x_1_4_1; union Value { struct RGB { unsigned char x_1_6_1; unsigned char x_1_6_2; unsigned char x_1_6_3; } x_2_5_1; unsigned short x_2_5_2; unsigned short x_2_5_3; struct AdjustedColor { unsigned char x_4_6_1; unsigned char x_4_6_2; unsigned int x_4_6_3 : 4; unsigned int x_4_6_4 : 1; unsigned int x_4_6_5 : 1; unsigned int x_4_6_6 : 1; } x_2_5_4; } x_1_4_2; } x_5_3_1; } x_1_2_5; } x_3_1_1; struct EshOpt { int (**x_2_2_1)(); unsigned short x_2_2_2; struct EshHeader { NSInteger x_3_3_1; NSUInteger x_3_3_2; short x_3_3_3; unsigned short x_3_3_4; unsigned char x_3_3_5; } x_2_2_3; struct ChMap<ChUINT4,EshOpt::Value,CsLess<ChUINT4> > { struct map<ChUINT4,EshOpt::Value,CsLess<ChUINT4>,std::allocator<std::pair<const ChUINT4, EshOpt::Value> > > { struct _Rb_tree<ChUINT4,std::pair<const ChUINT4, EshOpt::Value>,std::_Select1st<std::pair<const ChUINT4, EshOpt::Value> >,CsLess<ChUINT4>,std::allocator<std::pair<const ChUINT4, EshOpt::Value> > > { struct _Rb_tree_impl<CsLess<ChUINT4>,false> { struct CsLess<ChUINT4> { } x_1_6_1; struct _Rb_tree_node_base { NSInteger x_2_7_1; struct _Rb_tree_node_base {} *x_2_7_2; struct _Rb_tree_node_base {} *x_2_7_3; struct _Rb_tree_node_base {} *x_2_7_4; } x_1_6_2; NSUInteger x_1_6_3; } x_1_5_1; } x_1_4_1; } x_4_3_1; } x_2_2_4; struct EshColor { struct Data { NSInteger x_1_4_1; union Value { struct RGB { unsigned char x_1_6_1; unsigned char x_1_6_2; unsigned char x_1_6_3; } x_2_5_1; unsigned short x_2_5_2; unsigned short x_2_5_3; struct AdjustedColor { unsigned char x_4_6_1; unsigned char x_4_6_2; unsigned int x_4_6_3 : 4; unsigned int x_4_6_4 : 1; unsigned int x_4_6_5 : 1; unsigned int x_4_6_6 : 1; } x_2_5_4; } x_1_4_2; } x_5_3_1; } x_2_2_5; } x_3_1_2; struct EshSp { int (**x_3_2_1)(); unsigned short x_3_2_2; struct EshHeader { NSInteger x_3_3_1; NSUInteger x_3_3_2; short x_3_3_3; unsigned short x_3_3_4; unsigned char x_3_3_5; } x_3_2_3; NSUInteger x_3_2_4; /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*x_3_2_5; void*x_3_2_6; void*x_3_2_7; void*x_3_2_8; void*x_3_2_9; void*x_3_2_10; void*x_3_2_11; void*x_3_2_12; void*x_3_2_13; void*x_3_2_14; void*x_3_2_15; void*x_3_2_16; } x_3_1_3; struct CsRect<ChSINT4> { NSInteger x_4_2_1[4]; } x_3_1_4; } x3; struct EshTextBox { int (**x_4_1_1)(); unsigned short x_4_1_2; struct EshContentData {} *x_4_1_3; } x4; struct EshFill { int (**x_5_1_1)(); unsigned short x_5_1_2; struct EshContentData {} *x_5_1_3; } x5; struct EshStroke { int (**x_6_1_1)(); unsigned short x_6_1_2; struct EshContentData {} *x_6_1_3; } x6; struct EshShadow { int (**x_7_1_1)(); unsigned short x_7_1_2; struct EshContentData {} *x_7_1_3; } x7; struct EshExtrusion { int (**x_8_1_1)(); unsigned short x_8_1_2; struct EshContentData {} *x_8_1_3; } x8; struct EshCallout { int (**x_9_1_1)(); unsigned short x_9_1_2; struct EshContentData {} *x_9_1_3; } x9; int (**x10)(); struct EshShapeProperties { int (**x_11_1_1)(); unsigned short x_11_1_2; struct EshContentData {} *x_11_1_3; int (**x_11_1_4)(); } x11; struct EshShapeLocks { int (**x_12_1_1)(); unsigned short x_12_1_2; struct EshContentData {} *x_12_1_3; } x12; struct EshShapeImageData { int (**x_13_1_1)(); unsigned short x_13_1_2; struct EshContentData {} *x_13_1_3; } x13; struct EshTextPath { int (**x_14_1_1)(); unsigned short x_14_1_2; struct EshContentData {} *x_14_1_3; } x14; struct EshPath { int (**x_15_1_1)(); unsigned short x_15_1_2; struct EshContentData {} *x_15_1_3; } x15; struct EshSkew { int (**x_16_1_1)(); unsigned short x_16_1_2; struct EshContentData {} *x_16_1_3; } x16; struct EshQuickTimeData { int (**x_17_1_1)(); unsigned short x_17_1_2; struct EshHeader { NSInteger x_3_2_1; NSUInteger x_3_2_2; short x_3_2_3; unsigned short x_3_2_4; unsigned char x_3_2_5; } x_17_1_3; struct OcBinaryData { int (**x_4_2_1)(); NSUInteger x_4_2_2; NSUInteger x_4_2_3; NSUInteger x_4_2_4; char *x_4_2_5; void*x_4_2_6; } x_17_1_4; } x17; }*)arg1 masterShape:(struct EshShape { int (**x1)(); unsigned short x2; struct EshContentData { struct EshOpt { int (**x_1_2_1)(); unsigned short x_1_2_2; struct EshHeader { NSInteger x_3_3_1; NSUInteger x_3_3_2; short x_3_3_3; unsigned short x_3_3_4; unsigned char x_3_3_5; } x_1_2_3; struct ChMap<ChUINT4,EshOpt::Value,CsLess<ChUINT4> > { struct map<ChUINT4,EshOpt::Value,CsLess<ChUINT4>,std::allocator<std::pair<const ChUINT4, EshOpt::Value> > > { struct _Rb_tree<ChUINT4,std::pair<const ChUINT4, EshOpt::Value>,std::_Select1st<std::pair<const ChUINT4, EshOpt::Value> >,CsLess<ChUINT4>,std::allocator<std::pair<const ChUINT4, EshOpt::Value> > > { struct _Rb_tree_impl<CsLess<ChUINT4>,false> { struct CsLess<ChUINT4> { } x_1_6_1; struct _Rb_tree_node_base { NSInteger x_2_7_1; struct _Rb_tree_node_base {} *x_2_7_2; struct _Rb_tree_node_base {} *x_2_7_3; struct _Rb_tree_node_base {} *x_2_7_4; } x_1_6_2; NSUInteger x_1_6_3; } x_1_5_1; } x_1_4_1; } x_4_3_1; } x_1_2_4; struct EshColor { struct Data { NSInteger x_1_4_1; union Value { struct RGB { unsigned char x_1_6_1; unsigned char x_1_6_2; unsigned char x_1_6_3; } x_2_5_1; unsigned short x_2_5_2; unsigned short x_2_5_3; struct AdjustedColor { unsigned char x_4_6_1; unsigned char x_4_6_2; unsigned int x_4_6_3 : 4; unsigned int x_4_6_4 : 1; unsigned int x_4_6_5 : 1; unsigned int x_4_6_6 : 1; } x_2_5_4; } x_1_4_2; } x_5_3_1; } x_1_2_5; } x_3_1_1; struct EshOpt { int (**x_2_2_1)(); unsigned short x_2_2_2; struct EshHeader { NSInteger x_3_3_1; NSUInteger x_3_3_2; short x_3_3_3; unsigned short x_3_3_4; unsigned char x_3_3_5; } x_2_2_3; struct ChMap<ChUINT4,EshOpt::Value,CsLess<ChUINT4> > { struct map<ChUINT4,EshOpt::Value,CsLess<ChUINT4>,std::allocator<std::pair<const ChUINT4, EshOpt::Value> > > { struct _Rb_tree<ChUINT4,std::pair<const ChUINT4, EshOpt::Value>,std::_Select1st<std::pair<const ChUINT4, EshOpt::Value> >,CsLess<ChUINT4>,std::allocator<std::pair<const ChUINT4, EshOpt::Value> > > { struct _Rb_tree_impl<CsLess<ChUINT4>,false> { struct CsLess<ChUINT4> { } x_1_6_1; struct _Rb_tree_node_base { NSInteger x_2_7_1; struct _Rb_tree_node_base {} *x_2_7_2; struct _Rb_tree_node_base {} *x_2_7_3; struct _Rb_tree_node_base {} *x_2_7_4; } x_1_6_2; NSUInteger x_1_6_3; } x_1_5_1; } x_1_4_1; } x_4_3_1; } x_2_2_4; struct EshColor { struct Data { NSInteger x_1_4_1; union Value { struct RGB { unsigned char x_1_6_1; unsigned char x_1_6_2; unsigned char x_1_6_3; } x_2_5_1; unsigned short x_2_5_2; unsigned short x_2_5_3; struct AdjustedColor { unsigned char x_4_6_1; unsigned char x_4_6_2; unsigned int x_4_6_3 : 4; unsigned int x_4_6_4 : 1; unsigned int x_4_6_5 : 1; unsigned int x_4_6_6 : 1; } x_2_5_4; } x_1_4_2; } x_5_3_1; } x_2_2_5; } x_3_1_2; struct EshSp { int (**x_3_2_1)(); unsigned short x_3_2_2; struct EshHeader { NSInteger x_3_3_1; NSUInteger x_3_3_2; short x_3_3_3; unsigned short x_3_3_4; unsigned char x_3_3_5; } x_3_2_3; NSUInteger x_3_2_4; /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*x_3_2_5; void*x_3_2_6; void*x_3_2_7; void*x_3_2_8; void*x_3_2_9; void*x_3_2_10; void*x_3_2_11; void*x_3_2_12; void*x_3_2_13; void*x_3_2_14; void*x_3_2_15; void*x_3_2_16; } x_3_1_3; struct CsRect<ChSINT4> { NSInteger x_4_2_1[4]; } x_3_1_4; } x3; struct EshTextBox { int (**x_4_1_1)(); unsigned short x_4_1_2; struct EshContentData {} *x_4_1_3; } x4; struct EshFill { int (**x_5_1_1)(); unsigned short x_5_1_2; struct EshContentData {} *x_5_1_3; } x5; struct EshStroke { int (**x_6_1_1)(); unsigned short x_6_1_2; struct EshContentData {} *x_6_1_3; } x6; struct EshShadow { int (**x_7_1_1)(); unsigned short x_7_1_2; struct EshContentData {} *x_7_1_3; } x7; struct EshExtrusion { int (**x_8_1_1)(); unsigned short x_8_1_2; struct EshContentData {} *x_8_1_3; } x8; struct EshCallout { int (**x_9_1_1)(); unsigned short x_9_1_2; struct EshContentData {} *x_9_1_3; } x9; int (**x10)(); struct EshShapeProperties { int (**x_11_1_1)(); unsigned short x_11_1_2; struct EshContentData {} *x_11_1_3; int (**x_11_1_4)(); } x11; struct EshShapeLocks { int (**x_12_1_1)(); unsigned short x_12_1_2; struct EshContentData {} *x_12_1_3; } x12; struct EshShapeImageData { int (**x_13_1_1)(); unsigned short x_13_1_2; struct EshContentData {} *x_13_1_3; } x13; struct EshTextPath { int (**x_14_1_1)(); unsigned short x_14_1_2; struct EshContentData {} *x_14_1_3; } x14; struct EshPath { int (**x_15_1_1)(); unsigned short x_15_1_2; struct EshContentData {} *x_15_1_3; } x15; struct EshSkew { int (**x_16_1_1)(); unsigned short x_16_1_2; struct EshContentData {} *x_16_1_3; } x16; struct EshQuickTimeData { int (**x_17_1_1)(); unsigned short x_17_1_2; struct EshHeader { NSInteger x_3_2_1; NSUInteger x_3_2_2; short x_3_2_3; unsigned short x_3_2_4; unsigned char x_3_2_5; } x_17_1_3; struct OcBinaryData { int (**x_4_2_1)(); NSUInteger x_4_2_2; NSUInteger x_4_2_3; NSUInteger x_4_2_4; char *x_4_2_5; void*x_4_2_6; } x_17_1_4; } x17; }*)arg2;
- (id)initWithShape:(struct EshShape { int (**x1)(); unsigned short x2; struct EshContentData { struct EshOpt { int (**x_1_2_1)(); unsigned short x_1_2_2; struct EshHeader { NSInteger x_3_3_1; NSUInteger x_3_3_2; short x_3_3_3; unsigned short x_3_3_4; unsigned char x_3_3_5; } x_1_2_3; struct ChMap<ChUINT4,EshOpt::Value,CsLess<ChUINT4> > { struct map<ChUINT4,EshOpt::Value,CsLess<ChUINT4>,std::allocator<std::pair<const ChUINT4, EshOpt::Value> > > { struct _Rb_tree<ChUINT4,std::pair<const ChUINT4, EshOpt::Value>,std::_Select1st<std::pair<const ChUINT4, EshOpt::Value> >,CsLess<ChUINT4>,std::allocator<std::pair<const ChUINT4, EshOpt::Value> > > { struct _Rb_tree_impl<CsLess<ChUINT4>,false> { struct CsLess<ChUINT4> { } x_1_6_1; struct _Rb_tree_node_base { NSInteger x_2_7_1; struct _Rb_tree_node_base {} *x_2_7_2; struct _Rb_tree_node_base {} *x_2_7_3; struct _Rb_tree_node_base {} *x_2_7_4; } x_1_6_2; NSUInteger x_1_6_3; } x_1_5_1; } x_1_4_1; } x_4_3_1; } x_1_2_4; struct EshColor { struct Data { NSInteger x_1_4_1; union Value { struct RGB { unsigned char x_1_6_1; unsigned char x_1_6_2; unsigned char x_1_6_3; } x_2_5_1; unsigned short x_2_5_2; unsigned short x_2_5_3; struct AdjustedColor { unsigned char x_4_6_1; unsigned char x_4_6_2; unsigned int x_4_6_3 : 4; unsigned int x_4_6_4 : 1; unsigned int x_4_6_5 : 1; unsigned int x_4_6_6 : 1; } x_2_5_4; } x_1_4_2; } x_5_3_1; } x_1_2_5; } x_3_1_1; struct EshOpt { int (**x_2_2_1)(); unsigned short x_2_2_2; struct EshHeader { NSInteger x_3_3_1; NSUInteger x_3_3_2; short x_3_3_3; unsigned short x_3_3_4; unsigned char x_3_3_5; } x_2_2_3; struct ChMap<ChUINT4,EshOpt::Value,CsLess<ChUINT4> > { struct map<ChUINT4,EshOpt::Value,CsLess<ChUINT4>,std::allocator<std::pair<const ChUINT4, EshOpt::Value> > > { struct _Rb_tree<ChUINT4,std::pair<const ChUINT4, EshOpt::Value>,std::_Select1st<std::pair<const ChUINT4, EshOpt::Value> >,CsLess<ChUINT4>,std::allocator<std::pair<const ChUINT4, EshOpt::Value> > > { struct _Rb_tree_impl<CsLess<ChUINT4>,false> { struct CsLess<ChUINT4> { } x_1_6_1; struct _Rb_tree_node_base { NSInteger x_2_7_1; struct _Rb_tree_node_base {} *x_2_7_2; struct _Rb_tree_node_base {} *x_2_7_3; struct _Rb_tree_node_base {} *x_2_7_4; } x_1_6_2; NSUInteger x_1_6_3; } x_1_5_1; } x_1_4_1; } x_4_3_1; } x_2_2_4; struct EshColor { struct Data { NSInteger x_1_4_1; union Value { struct RGB { unsigned char x_1_6_1; unsigned char x_1_6_2; unsigned char x_1_6_3; } x_2_5_1; unsigned short x_2_5_2; unsigned short x_2_5_3; struct AdjustedColor { unsigned char x_4_6_1; unsigned char x_4_6_2; unsigned int x_4_6_3 : 4; unsigned int x_4_6_4 : 1; unsigned int x_4_6_5 : 1; unsigned int x_4_6_6 : 1; } x_2_5_4; } x_1_4_2; } x_5_3_1; } x_2_2_5; } x_3_1_2; struct EshSp { int (**x_3_2_1)(); unsigned short x_3_2_2; struct EshHeader { NSInteger x_3_3_1; NSUInteger x_3_3_2; short x_3_3_3; unsigned short x_3_3_4; unsigned char x_3_3_5; } x_3_2_3; NSUInteger x_3_2_4; /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*x_3_2_5; void*x_3_2_6; void*x_3_2_7; void*x_3_2_8; void*x_3_2_9; void*x_3_2_10; void*x_3_2_11; void*x_3_2_12; void*x_3_2_13; void*x_3_2_14; void*x_3_2_15; void*x_3_2_16; } x_3_1_3; struct CsRect<ChSINT4> { NSInteger x_4_2_1[4]; } x_3_1_4; } x3; struct EshTextBox { int (**x_4_1_1)(); unsigned short x_4_1_2; struct EshContentData {} *x_4_1_3; } x4; struct EshFill { int (**x_5_1_1)(); unsigned short x_5_1_2; struct EshContentData {} *x_5_1_3; } x5; struct EshStroke { int (**x_6_1_1)(); unsigned short x_6_1_2; struct EshContentData {} *x_6_1_3; } x6; struct EshShadow { int (**x_7_1_1)(); unsigned short x_7_1_2; struct EshContentData {} *x_7_1_3; } x7; struct EshExtrusion { int (**x_8_1_1)(); unsigned short x_8_1_2; struct EshContentData {} *x_8_1_3; } x8; struct EshCallout { int (**x_9_1_1)(); unsigned short x_9_1_2; struct EshContentData {} *x_9_1_3; } x9; int (**x10)(); struct EshShapeProperties { int (**x_11_1_1)(); unsigned short x_11_1_2; struct EshContentData {} *x_11_1_3; int (**x_11_1_4)(); } x11; struct EshShapeLocks { int (**x_12_1_1)(); unsigned short x_12_1_2; struct EshContentData {} *x_12_1_3; } x12; struct EshShapeImageData { int (**x_13_1_1)(); unsigned short x_13_1_2; struct EshContentData {} *x_13_1_3; } x13; struct EshTextPath { int (**x_14_1_1)(); unsigned short x_14_1_2; struct EshContentData {} *x_14_1_3; } x14; struct EshPath { int (**x_15_1_1)(); unsigned short x_15_1_2; struct EshContentData {} *x_15_1_3; } x15; struct EshSkew { int (**x_16_1_1)(); unsigned short x_16_1_2; struct EshContentData {} *x_16_1_3; } x16; struct EshQuickTimeData { int (**x_17_1_1)(); unsigned short x_17_1_2; struct EshHeader { NSInteger x_3_2_1; NSUInteger x_3_2_2; short x_3_2_3; unsigned short x_3_2_4; unsigned char x_3_2_5; } x_17_1_3; struct OcBinaryData { int (**x_4_2_1)(); NSUInteger x_4_2_2; NSUInteger x_4_2_3; NSUInteger x_4_2_4; char *x_4_2_5; void*x_4_2_6; } x_17_1_4; } x17; }*)arg1;
- (BOOL)isFillOK;
- (BOOL)isFilled;
- (BOOL)isShadowOK;
- (BOOL)isShadowed;
- (BOOL)isStrokeOK;
- (BOOL)isStroked;
- (BOOL)isTextPath;
- (BOOL)textPathBold;
- (id)textPathFontFamily;
- (long)textPathFontSize;
- (BOOL)textPathItalic;
- (BOOL)textPathSmallcaps;
- (BOOL)textPathStrikethrough;
- (NSInteger)textPathTextAlignment;
- (BOOL)textPathUnderline;
- (id)textPathUnicodeString;

@end
