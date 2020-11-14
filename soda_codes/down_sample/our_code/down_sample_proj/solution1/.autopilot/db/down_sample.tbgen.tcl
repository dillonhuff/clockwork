set moduleName down_sample
set isTopModule 1
set isTaskLevelControl 1
set isCombinational 0
set isDatapathOnly 0
set isFreeRunPipelineModule 0
set isPipelined 0
set pipeline_type none
set FunctionProtocol ap_ctrl_hs
set isOneStateSeq 0
set ProfileFlag 0
set StallSigGenFlag 0
set isEnableWaveformDebug 1
set C_modelName {down_sample}
set C_modelType { void 0 }
set C_modelArgList {
	{ input_copy_stencil_values_V_val_V int 16 regular {fifo 0 volatile }  }
	{ hw_output_stencil_values_V_val_V int 16 regular {fifo 1 volatile }  }
}
set C_modelArgMapList {[ 
	{ "Name" : "input_copy_stencil_values_V_val_V", "interface" : "fifo", "bitwidth" : 16, "direction" : "READONLY", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "input_copy_stencil.values.V.val.V","cData": "uint16","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 0,"up" : 0,"step" : 1}]}]}]} , 
 	{ "Name" : "hw_output_stencil_values_V_val_V", "interface" : "fifo", "bitwidth" : 16, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "hw_output_stencil.values.V.val.V","cData": "uint16","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 0,"up" : 0,"step" : 1}]}]}]} ]}
# RTL Port declarations: 
set portNum 12
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ input_copy_stencil_values_V_val_V_dout sc_in sc_lv 16 signal 0 } 
	{ input_copy_stencil_values_V_val_V_empty_n sc_in sc_logic 1 signal 0 } 
	{ input_copy_stencil_values_V_val_V_read sc_out sc_logic 1 signal 0 } 
	{ hw_output_stencil_values_V_val_V_din sc_out sc_lv 16 signal 1 } 
	{ hw_output_stencil_values_V_val_V_full_n sc_in sc_logic 1 signal 1 } 
	{ hw_output_stencil_values_V_val_V_write sc_out sc_logic 1 signal 1 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "input_copy_stencil_values_V_val_V_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "input_copy_stencil_values_V_val_V", "role": "dout" }} , 
 	{ "name": "input_copy_stencil_values_V_val_V_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "input_copy_stencil_values_V_val_V", "role": "empty_n" }} , 
 	{ "name": "input_copy_stencil_values_V_val_V_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "input_copy_stencil_values_V_val_V", "role": "read" }} , 
 	{ "name": "hw_output_stencil_values_V_val_V_din", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "hw_output_stencil_values_V_val_V", "role": "din" }} , 
 	{ "name": "hw_output_stencil_values_V_val_V_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "hw_output_stencil_values_V_val_V", "role": "full_n" }} , 
 	{ "name": "hw_output_stencil_values_V_val_V_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "hw_output_stencil_values_V_val_V", "role": "write" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1"],
		"CDFG" : "down_sample",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "16388", "EstimateLatencyMax" : "16388",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "input_copy_stencil_values_V_val_V", "Type" : "Fifo", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "input_copy_stencil_values_V_val_V_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "hw_output_stencil_values_V_val_V", "Type" : "Fifo", "Direction" : "O",
				"BlockSignal" : [
					{"Name" : "hw_output_stencil_values_V_val_V_blk_n", "Type" : "RtlSignal"}]}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.hw_input_stencil_hw_s_U", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	down_sample {
		input_copy_stencil_values_V_val_V {Type I LastRead 2 FirstWrite -1}
		hw_output_stencil_values_V_val_V {Type O LastRead -1 FirstWrite 4}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "16388", "Max" : "16388"}
	, {"Name" : "Interval", "Min" : "16389", "Max" : "16389"}
]}

set PipelineEnableSignalInfo {[
	{"Pipeline" : "0", "EnableSignal" : "ap_enable_pp0"}
]}

set Spec2ImplPortList { 
	input_copy_stencil_values_V_val_V { ap_fifo {  { input_copy_stencil_values_V_val_V_dout fifo_data 0 16 }  { input_copy_stencil_values_V_val_V_empty_n fifo_status 0 1 }  { input_copy_stencil_values_V_val_V_read fifo_update 1 1 } } }
	hw_output_stencil_values_V_val_V { ap_fifo {  { hw_output_stencil_values_V_val_V_din fifo_data 1 16 }  { hw_output_stencil_values_V_val_V_full_n fifo_status 0 1 }  { hw_output_stencil_values_V_val_V_write fifo_update 1 1 } } }
}

set busDeadlockParameterList { 
}

# RTL port scheduling information:
set fifoSchedulingInfoList { 
	input_copy_stencil_values_V_val_V { fifo_read 16384 no_conditional }
	hw_output_stencil_values_V_val_V { fifo_write 16384 has_conditional }
}

# RTL bus port read request latency information:
set busReadReqLatencyList { 
}

# RTL bus port write response latency information:
set busWriteResLatencyList { 
}

# RTL array port load latency information:
set memoryLoadLatencyList { 
}
