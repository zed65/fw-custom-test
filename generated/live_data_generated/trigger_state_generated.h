// this section was generated automatically by rusEFI tool config_definition_base-all.jar based on (unknown script) controllers/trigger/trigger_state.txt
// by class com.rusefi.output.CHeaderConsumer
// begin
#pragma once
#include "rusefi_types.h"
// start of trigger_state_s
struct trigger_state_s {
	/**
	 * sync: trigger wheel sync counter
	 * offset 0
	 */
	uint32_t synchronizationCounter = (uint32_t)0;
	/**
	 * units: us
	 * offset 4
	 */
	uint32_t vvtToothDurations0 = (uint32_t)0;
	/**
	 * "sync: Primary Cam Position"
	 * offset 8
	 */
	float vvtCurrentPosition = (float)0;
	/**
	 * "sync: Cam Tooth Position"
	 * offset 12
	 */
	float vvtToothPosition[4];
	/**
	 * @@GAUGE_NAME_TRG_GAP@@
	 * offset 28
	 */
	float triggerSyncGapRatio = (float)0;
	/**
	 * offset 32
	 */
	uint8_t triggerStateIndex = (uint8_t)0;
	/**
	 * need 4 byte alignment
	 * units: units
	 * offset 33
	 */
	uint8_t alignmentFill_at_33[3];
};
static_assert(sizeof(trigger_state_s) == 36);

// end
// this section was generated automatically by rusEFI tool config_definition_base-all.jar based on (unknown script) controllers/trigger/trigger_state.txt
