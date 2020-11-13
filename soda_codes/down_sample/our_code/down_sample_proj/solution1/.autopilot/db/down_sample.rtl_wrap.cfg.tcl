set lang "C++"
set moduleName "down_sample"
set moduleIsExternC "0"
set rawDecl ""
set globalVariable ""
set PortList ""
set PortName0 "input_copy_stencil"
set BitWidth0 "16"
set ArrayOpt0 ""
set Const0 "0"
set Volatile0 "0"
set Pointer0 "2"
set Reference0 "1"
set Dims0 [list 0]
set Interface0 "wire"
set structMem0 ""
set PortName00 "values"
set BitWidth00 "16"
set ArrayOpt00 ""
set Const00 "0"
set Volatile00 "0"
set Pointer00 "0"
set Reference00 "0"
set Dims00 [list 0]
set Interface00 [list AP_STREAM 0] 
set structMem00 ""
set PortName000 "val"
set BitWidth000 "16"
set ArrayOpt000 ""
set Const000 "0"
set Volatile000 "0"
set Pointer000 "0"
set Reference000 "0"
set Dims000 [list 0]
set Interface000 "wire"
set DataType000 "[list ap_uint 16 ]"
set Port000 [list $PortName000 $Interface000 $DataType000 $Pointer000 $Dims000 $Const000 $Volatile000 $ArrayOpt000]
lappend structMem00 $Port000
set DataType00tp0 "int"
set structParameter00 [list [list $DataType00tp0 Len] ]
set structArgument00 [list 16 ]
set NameSpace00 [list ]
set structIsPacked00 "0"
set DataType00 [list "hw_uint<16>" "struct hw_uint" $structMem00 1 0 $structParameter00 $structArgument00 $NameSpace00 $structIsPacked00]
set Port00 [list $PortName00 $Interface00 $DataType00 $Pointer00 $Dims00 $Const00 $Volatile00 $ArrayOpt00]
lappend structMem0 $Port00
set structParameter0 [list [list typename T] ]
set structMem0ta0 ""
set PortName0ta00 "val"
set BitWidth0ta00 "16"
set ArrayOpt0ta00 ""
set Const0ta00 "0"
set Volatile0ta00 "0"
set Pointer0ta00 "0"
set Reference0ta00 "0"
set Dims0ta00 [list 0]
set Interface0ta00 "wire"
set DataType0ta00 "[list ap_uint 16 ]"
set Port0ta00 [list $PortName0ta00 $Interface0ta00 $DataType0ta00 $Pointer0ta00 $Dims0ta00 $Const0ta00 $Volatile0ta00 $ArrayOpt0ta00]
lappend structMem0ta0 $Port0ta00
set DataType0ta0tp0 "int"
set structParameter0ta0 [list [list $DataType0ta0tp0 Len] ]
set structArgument0ta0 [list 16 ]
set NameSpace0ta0 [list ]
set structIsPacked0ta0 "0"
set DataType0ta0 [list "hw_uint<16>" "struct hw_uint" $structMem0ta0 1 0 $structParameter0ta0 $structArgument0ta0 $NameSpace0ta0 $structIsPacked0ta0]
set structArgument0 [list $DataType0ta0 ]
set NameSpace0 [list ]
set structIsPacked0 "0"
set DataType0 [list "HWStream<hw_uint<16> >" "struct HWStream" $structMem0 1 0 $structParameter0 $structArgument0 $NameSpace0 $structIsPacked0]
set Port0 [list $PortName0 $Interface0 $DataType0 $Pointer0 $Dims0 $Const0 $Volatile0 $ArrayOpt0]
lappend PortList $Port0
set PortName1 "hw_output_stencil"
set BitWidth1 "16"
set ArrayOpt1 ""
set Const1 "0"
set Volatile1 "0"
set Pointer1 "2"
set Reference1 "1"
set Dims1 [list 0]
set Interface1 "wire"
set structMem1 ""
set PortName10 "values"
set BitWidth10 "16"
set ArrayOpt10 ""
set Const10 "0"
set Volatile10 "0"
set Pointer10 "0"
set Reference10 "0"
set Dims10 [list 0]
set Interface10 [list AP_STREAM 0] 
set structMem10 ""
set PortName100 "val"
set BitWidth100 "16"
set ArrayOpt100 ""
set Const100 "0"
set Volatile100 "0"
set Pointer100 "0"
set Reference100 "0"
set Dims100 [list 0]
set Interface100 "wire"
set DataType100 "[list ap_uint 16 ]"
set Port100 [list $PortName100 $Interface100 $DataType100 $Pointer100 $Dims100 $Const100 $Volatile100 $ArrayOpt100]
lappend structMem10 $Port100
set DataType10tp0 "int"
set structParameter10 [list [list $DataType10tp0 Len] ]
set structArgument10 [list 16 ]
set NameSpace10 [list ]
set structIsPacked10 "0"
set DataType10 [list "hw_uint<16>" "struct hw_uint" $structMem10 1 0 $structParameter10 $structArgument10 $NameSpace10 $structIsPacked10]
set Port10 [list $PortName10 $Interface10 $DataType10 $Pointer10 $Dims10 $Const10 $Volatile10 $ArrayOpt10]
lappend structMem1 $Port10
set structParameter1 [list [list typename T] ]
set structMem1ta0 ""
set PortName1ta00 "val"
set BitWidth1ta00 "16"
set ArrayOpt1ta00 ""
set Const1ta00 "0"
set Volatile1ta00 "0"
set Pointer1ta00 "0"
set Reference1ta00 "0"
set Dims1ta00 [list 0]
set Interface1ta00 "wire"
set DataType1ta00 "[list ap_uint 16 ]"
set Port1ta00 [list $PortName1ta00 $Interface1ta00 $DataType1ta00 $Pointer1ta00 $Dims1ta00 $Const1ta00 $Volatile1ta00 $ArrayOpt1ta00]
lappend structMem1ta0 $Port1ta00
set DataType1ta0tp0 "int"
set structParameter1ta0 [list [list $DataType1ta0tp0 Len] ]
set structArgument1ta0 [list 16 ]
set NameSpace1ta0 [list ]
set structIsPacked1ta0 "0"
set DataType1ta0 [list "hw_uint<16>" "struct hw_uint" $structMem1ta0 1 0 $structParameter1ta0 $structArgument1ta0 $NameSpace1ta0 $structIsPacked1ta0]
set structArgument1 [list $DataType1ta0 ]
set NameSpace1 [list ]
set structIsPacked1 "0"
set DataType1 [list "HWStream<hw_uint<16> >" "struct HWStream" $structMem1 1 0 $structParameter1 $structArgument1 $NameSpace1 $structIsPacked1]
set Port1 [list $PortName1 $Interface1 $DataType1 $Pointer1 $Dims1 $Const1 $Volatile1 $ArrayOpt1]
lappend PortList $Port1
set globalAPint "" 
set returnAPInt "" 
set hasCPPAPInt 1 
set argAPInt "" 
set hasCPPAPFix 0 
set hasSCFix 0 
set hasCBool 0 
set hasCPPComplex 0 
set isTemplateTop 0
set hasHalf 0 
set dataPackList ""
set module [list $moduleName $PortList $rawDecl $argAPInt $returnAPInt $dataPackList]
