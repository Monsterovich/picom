// This file is generated by tools/animgen.c from data/animation_presets.conf
// This file is included in git repository for convenience only.
// DO NOT EDIT THIS FILE!

#include <libconfig.h>
#include "../curve.h"
#include "../script.h"
#include "../script_internal.h"
#include "config.h"
#include "utils/misc.h"
static struct script *script_template__disappear(int *output_slots) {
	static const struct instruction instrs[] = {
	    {.type = INST_BRANCH_ONCE, .rel = 59},
	    {.type = INST_LOAD, .slot = 14},
	    {.type = INST_LOAD, .slot = 13},
	    {.type = INST_OP, .op = OP_SUB},
	    {.type = INST_LOAD, .slot = 11},
	    {.type = INST_IMM, .imm = 0.000000},
	    {.type = INST_OP, .op = OP_SUB},
	    {.type = INST_LOAD, .slot = 15},
	    {.type = INST_OP, .op = OP_DIV},
	    {
	        .type = INST_CURVE,
	        .curve = {.type = CURVE_LINEAR},
	    },
	    {.type = INST_OP, .op = OP_MUL},
	    {.type = INST_LOAD, .slot = 13},
	    {.type = INST_OP, .op = OP_ADD},
	    {.type = INST_STORE, .slot = 0},
	    {.type = INST_LOAD, .slot = 0},
	    {.type = INST_STORE, .slot = 1},
	    {.type = INST_LOAD, .slot = 0},
	    {.type = INST_STORE, .slot = 2},
	    {.type = INST_LOAD, .slot = 17},
	    {.type = INST_LOAD, .slot = 16},
	    {.type = INST_OP, .op = OP_SUB},
	    {.type = INST_LOAD, .slot = 11},
	    {.type = INST_IMM, .imm = 0.000000},
	    {.type = INST_OP, .op = OP_SUB},
	    {.type = INST_LOAD, .slot = 18},
	    {.type = INST_OP, .op = OP_DIV},
	    {
	        .type = INST_CURVE,
	        .curve = {.type = CURVE_CUBIC_BEZIER,
	                  .bezier = {.ax = -0.650000,
	                             .bx = 1.020000,
	                             .cx = 0.630000,
	                             .ay = -0.020000,
	                             .by = 0.960000,
	                             .cy = 0.060000}},
	    },
	    {.type = INST_OP, .op = OP_MUL},
	    {.type = INST_LOAD, .slot = 16},
	    {.type = INST_OP, .op = OP_ADD},
	    {.type = INST_STORE, .slot = 5},
	    {.type = INST_IMM, .imm = 1.000000},
	    {.type = INST_LOAD, .slot = 5},
	    {.type = INST_OP, .op = OP_SUB},
	    {.type = INST_IMM, .imm = 2.000000},
	    {.type = INST_OP, .op = OP_DIV},
	    {.type = INST_LOAD_CTX, .ctx = 16},
	    {.type = INST_OP, .op = OP_MUL},
	    {.type = INST_STORE, .slot = 3},
	    {.type = INST_LOAD, .slot = 5},
	    {.type = INST_STORE, .slot = 6},
	    {.type = INST_IMM, .imm = 1.000000},
	    {.type = INST_LOAD, .slot = 6},
	    {.type = INST_OP, .op = OP_SUB},
	    {.type = INST_IMM, .imm = 2.000000},
	    {.type = INST_OP, .op = OP_DIV},
	    {.type = INST_LOAD_CTX, .ctx = 24},
	    {.type = INST_OP, .op = OP_MUL},
	    {.type = INST_STORE, .slot = 4},
	    {.type = INST_LOAD, .slot = 5},
	    {.type = INST_STORE, .slot = 7},
	    {.type = INST_LOAD, .slot = 6},
	    {.type = INST_STORE, .slot = 8},
	    {.type = INST_LOAD, .slot = 3},
	    {.type = INST_STORE, .slot = 9},
	    {.type = INST_LOAD, .slot = 4},
	    {.type = INST_STORE, .slot = 10},
	    {.type = INST_BRANCH_ONCE, .rel = 15},
	    {.type = INST_HALT},
	    {.type = INST_LOAD_CTX, .ctx = 32},
	    {.type = INST_STORE_OVER_NAN, .slot = 13},
	    {.type = INST_LOAD_CTX, .ctx = 1073741824},
	    {.type = INST_STORE, .slot = 15},
	    {.type = INST_LOAD_CTX, .ctx = 40},
	    {.type = INST_STORE, .slot = 14},
	    {.type = INST_IMM, .imm = 1.000000},
	    {.type = INST_STORE_OVER_NAN, .slot = 16},
	    {.type = INST_LOAD_CTX, .ctx = 1073741824},
	    {.type = INST_STORE, .slot = 18},
	    {.type = INST_LOAD_CTX, .ctx = 1073741828},
	    {.type = INST_STORE, .slot = 17},
	    {.type = INST_BRANCH, .rel = -70},
	    {.type = INST_IMM, .imm = 0.000000},
	    {.type = INST_STORE, .slot = 12},
	    {.type = INST_LOAD, .slot = 15},
	    {.type = INST_IMM, .imm = 0.000000},
	    {.type = INST_OP, .op = OP_ADD},
	    {.type = INST_LOAD, .slot = 12},
	    {.type = INST_OP, .op = OP_MAX},
	    {.type = INST_STORE, .slot = 12},
	    {.type = INST_LOAD, .slot = 18},
	    {.type = INST_IMM, .imm = 0.000000},
	    {.type = INST_OP, .op = OP_ADD},
	    {.type = INST_LOAD, .slot = 12},
	    {.type = INST_OP, .op = OP_MAX},
	    {.type = INST_STORE, .slot = 12},
	    {.type = INST_HALT},
	};
	struct script *ret = malloc(offsetof(struct script, instrs) + sizeof(instrs));
	ret->len = ARR_SIZE(instrs);
	ret->elapsed_slot = 11;
	ret->n_slots = 19;
	ret->stack_size = 3;
	ret->vars = NULL;
	ret->overrides = NULL;
	memcpy(ret->instrs, instrs, sizeof(instrs));
	{
		struct variable_allocation *var = malloc(sizeof(*var));
		*var = (struct variable_allocation){
		    .name = strdup("opacity"), .slot = 0, .index = 0};
		HASH_ADD_STR(ret->vars, name, var);
	}
	{
		struct variable_allocation *var = malloc(sizeof(*var));
		*var = (struct variable_allocation){
		    .name = strdup("blur-opacity"), .slot = 1, .index = 1};
		HASH_ADD_STR(ret->vars, name, var);
	}
	{
		struct variable_allocation *var = malloc(sizeof(*var));
		*var = (struct variable_allocation){
		    .name = strdup("shadow-opacity"), .slot = 2, .index = 2};
		HASH_ADD_STR(ret->vars, name, var);
	}
	{
		struct variable_allocation *var = malloc(sizeof(*var));
		*var = (struct variable_allocation){
		    .name = strdup("offset-x"), .slot = 3, .index = 3};
		HASH_ADD_STR(ret->vars, name, var);
	}
	{
		struct variable_allocation *var = malloc(sizeof(*var));
		*var = (struct variable_allocation){
		    .name = strdup("offset-y"), .slot = 4, .index = 4};
		HASH_ADD_STR(ret->vars, name, var);
	}
	{
		struct variable_allocation *var = malloc(sizeof(*var));
		*var = (struct variable_allocation){
		    .name = strdup("scale-x"), .slot = 5, .index = 5};
		HASH_ADD_STR(ret->vars, name, var);
	}
	{
		struct variable_allocation *var = malloc(sizeof(*var));
		*var = (struct variable_allocation){
		    .name = strdup("scale-y"), .slot = 6, .index = 6};
		HASH_ADD_STR(ret->vars, name, var);
	}
	{
		struct variable_allocation *var = malloc(sizeof(*var));
		*var = (struct variable_allocation){
		    .name = strdup("shadow-scale-x"), .slot = 7, .index = 7};
		HASH_ADD_STR(ret->vars, name, var);
	}
	{
		struct variable_allocation *var = malloc(sizeof(*var));
		*var = (struct variable_allocation){
		    .name = strdup("shadow-scale-y"), .slot = 8, .index = 8};
		HASH_ADD_STR(ret->vars, name, var);
	}
	{
		struct variable_allocation *var = malloc(sizeof(*var));
		*var = (struct variable_allocation){
		    .name = strdup("shadow-offset-x"), .slot = 9, .index = 9};
		HASH_ADD_STR(ret->vars, name, var);
	}
	{
		struct variable_allocation *var = malloc(sizeof(*var));
		*var = (struct variable_allocation){
		    .name = strdup("shadow-offset-y"), .slot = 10, .index = 10};
		HASH_ADD_STR(ret->vars, name, var);
	}
	{
		struct overridable_slot *override = malloc(sizeof(*override));
		*override = (struct overridable_slot){.name = strdup("opacity"), .slot = 13};
		HASH_ADD_STR(ret->overrides, name, override);
	}
	{
		struct overridable_slot *override = malloc(sizeof(*override));
		*override = (struct overridable_slot){.name = strdup("scale-x"), .slot = 16};
		HASH_ADD_STR(ret->overrides, name, override);
	}
	output_slots[0] = 3;
	output_slots[1] = 4;
	output_slots[2] = 9;
	output_slots[3] = 10;
	output_slots[4] = 0;
	output_slots[5] = 1;
	output_slots[6] = 2;
	output_slots[7] = 5;
	output_slots[8] = 6;
	output_slots[9] = 7;
	output_slots[10] = 8;
	output_slots[11] = -1;
	output_slots[12] = -1;
	output_slots[13] = -1;
	output_slots[14] = -1;
	return ret;
}

static bool
win_script_preset__disappear(struct win_script *output, config_setting_t *setting) {
	output->script = script_template__disappear(output->output_indices);
	double placeholder_duration = 0.200000;
	config_setting_lookup_float(setting, "duration", &placeholder_duration);
	double placeholder_scale = 0.950000;
	config_setting_lookup_float(setting, "scale", &placeholder_scale);
	struct script_specialization_context spec[] = {
	    {.offset = SCRIPT_CTX_PLACEHOLDER_BASE + 0, .value = placeholder_duration},
	    {.offset = SCRIPT_CTX_PLACEHOLDER_BASE + 4, .value = placeholder_scale},
	};
	script_specialize(output->script, spec, ARR_SIZE(spec));
	return true;
}
static struct script *script_template__appear(int *output_slots) {
	static const struct instruction instrs[] = {
	    {.type = INST_BRANCH_ONCE, .rel = 59},
	    {.type = INST_LOAD, .slot = 14},
	    {.type = INST_LOAD, .slot = 13},
	    {.type = INST_OP, .op = OP_SUB},
	    {.type = INST_LOAD, .slot = 11},
	    {.type = INST_IMM, .imm = 0.000000},
	    {.type = INST_OP, .op = OP_SUB},
	    {.type = INST_LOAD, .slot = 15},
	    {.type = INST_OP, .op = OP_DIV},
	    {
	        .type = INST_CURVE,
	        .curve = {.type = CURVE_LINEAR},
	    },
	    {.type = INST_OP, .op = OP_MUL},
	    {.type = INST_LOAD, .slot = 13},
	    {.type = INST_OP, .op = OP_ADD},
	    {.type = INST_STORE, .slot = 0},
	    {.type = INST_LOAD, .slot = 0},
	    {.type = INST_STORE, .slot = 1},
	    {.type = INST_LOAD, .slot = 0},
	    {.type = INST_STORE, .slot = 2},
	    {.type = INST_IMM, .imm = 1.000000},
	    {.type = INST_LOAD, .slot = 16},
	    {.type = INST_OP, .op = OP_SUB},
	    {.type = INST_LOAD, .slot = 11},
	    {.type = INST_IMM, .imm = 0.000000},
	    {.type = INST_OP, .op = OP_SUB},
	    {.type = INST_LOAD, .slot = 17},
	    {.type = INST_OP, .op = OP_DIV},
	    {
	        .type = INST_CURVE,
	        .curve = {.type = CURVE_CUBIC_BEZIER,
	                  .bezier = {.ax = -0.650000,
	                             .bx = 0.930000,
	                             .cx = 0.720000,
	                             .ay = -0.020000,
	                             .by = -0.900000,
	                             .cy = 1.920000}},
	    },
	    {.type = INST_OP, .op = OP_MUL},
	    {.type = INST_LOAD, .slot = 16},
	    {.type = INST_OP, .op = OP_ADD},
	    {.type = INST_STORE, .slot = 5},
	    {.type = INST_IMM, .imm = 1.000000},
	    {.type = INST_LOAD, .slot = 5},
	    {.type = INST_OP, .op = OP_SUB},
	    {.type = INST_IMM, .imm = 2.000000},
	    {.type = INST_OP, .op = OP_DIV},
	    {.type = INST_LOAD_CTX, .ctx = 16},
	    {.type = INST_OP, .op = OP_MUL},
	    {.type = INST_STORE, .slot = 3},
	    {.type = INST_LOAD, .slot = 5},
	    {.type = INST_STORE, .slot = 6},
	    {.type = INST_IMM, .imm = 1.000000},
	    {.type = INST_LOAD, .slot = 6},
	    {.type = INST_OP, .op = OP_SUB},
	    {.type = INST_IMM, .imm = 2.000000},
	    {.type = INST_OP, .op = OP_DIV},
	    {.type = INST_LOAD_CTX, .ctx = 24},
	    {.type = INST_OP, .op = OP_MUL},
	    {.type = INST_STORE, .slot = 4},
	    {.type = INST_LOAD, .slot = 5},
	    {.type = INST_STORE, .slot = 7},
	    {.type = INST_LOAD, .slot = 6},
	    {.type = INST_STORE, .slot = 8},
	    {.type = INST_LOAD, .slot = 3},
	    {.type = INST_STORE, .slot = 9},
	    {.type = INST_LOAD, .slot = 4},
	    {.type = INST_STORE, .slot = 10},
	    {.type = INST_BRANCH_ONCE, .rel = 13},
	    {.type = INST_HALT},
	    {.type = INST_LOAD_CTX, .ctx = 32},
	    {.type = INST_STORE_OVER_NAN, .slot = 13},
	    {.type = INST_LOAD_CTX, .ctx = 1073741824},
	    {.type = INST_STORE, .slot = 15},
	    {.type = INST_LOAD_CTX, .ctx = 40},
	    {.type = INST_STORE, .slot = 14},
	    {.type = INST_LOAD_CTX, .ctx = 1073741828},
	    {.type = INST_STORE_OVER_NAN, .slot = 16},
	    {.type = INST_LOAD_CTX, .ctx = 1073741824},
	    {.type = INST_STORE, .slot = 17},
	    {.type = INST_BRANCH, .rel = -68},
	    {.type = INST_IMM, .imm = 0.000000},
	    {.type = INST_STORE, .slot = 12},
	    {.type = INST_LOAD, .slot = 15},
	    {.type = INST_IMM, .imm = 0.000000},
	    {.type = INST_OP, .op = OP_ADD},
	    {.type = INST_LOAD, .slot = 12},
	    {.type = INST_OP, .op = OP_MAX},
	    {.type = INST_STORE, .slot = 12},
	    {.type = INST_LOAD, .slot = 17},
	    {.type = INST_IMM, .imm = 0.000000},
	    {.type = INST_OP, .op = OP_ADD},
	    {.type = INST_LOAD, .slot = 12},
	    {.type = INST_OP, .op = OP_MAX},
	    {.type = INST_STORE, .slot = 12},
	    {.type = INST_HALT},
	};
	struct script *ret = malloc(offsetof(struct script, instrs) + sizeof(instrs));
	ret->len = ARR_SIZE(instrs);
	ret->elapsed_slot = 11;
	ret->n_slots = 18;
	ret->stack_size = 3;
	ret->vars = NULL;
	ret->overrides = NULL;
	memcpy(ret->instrs, instrs, sizeof(instrs));
	{
		struct variable_allocation *var = malloc(sizeof(*var));
		*var = (struct variable_allocation){
		    .name = strdup("opacity"), .slot = 0, .index = 0};
		HASH_ADD_STR(ret->vars, name, var);
	}
	{
		struct variable_allocation *var = malloc(sizeof(*var));
		*var = (struct variable_allocation){
		    .name = strdup("blur-opacity"), .slot = 1, .index = 1};
		HASH_ADD_STR(ret->vars, name, var);
	}
	{
		struct variable_allocation *var = malloc(sizeof(*var));
		*var = (struct variable_allocation){
		    .name = strdup("shadow-opacity"), .slot = 2, .index = 2};
		HASH_ADD_STR(ret->vars, name, var);
	}
	{
		struct variable_allocation *var = malloc(sizeof(*var));
		*var = (struct variable_allocation){
		    .name = strdup("offset-x"), .slot = 3, .index = 3};
		HASH_ADD_STR(ret->vars, name, var);
	}
	{
		struct variable_allocation *var = malloc(sizeof(*var));
		*var = (struct variable_allocation){
		    .name = strdup("offset-y"), .slot = 4, .index = 4};
		HASH_ADD_STR(ret->vars, name, var);
	}
	{
		struct variable_allocation *var = malloc(sizeof(*var));
		*var = (struct variable_allocation){
		    .name = strdup("scale-x"), .slot = 5, .index = 5};
		HASH_ADD_STR(ret->vars, name, var);
	}
	{
		struct variable_allocation *var = malloc(sizeof(*var));
		*var = (struct variable_allocation){
		    .name = strdup("scale-y"), .slot = 6, .index = 6};
		HASH_ADD_STR(ret->vars, name, var);
	}
	{
		struct variable_allocation *var = malloc(sizeof(*var));
		*var = (struct variable_allocation){
		    .name = strdup("shadow-scale-x"), .slot = 7, .index = 7};
		HASH_ADD_STR(ret->vars, name, var);
	}
	{
		struct variable_allocation *var = malloc(sizeof(*var));
		*var = (struct variable_allocation){
		    .name = strdup("shadow-scale-y"), .slot = 8, .index = 8};
		HASH_ADD_STR(ret->vars, name, var);
	}
	{
		struct variable_allocation *var = malloc(sizeof(*var));
		*var = (struct variable_allocation){
		    .name = strdup("shadow-offset-x"), .slot = 9, .index = 9};
		HASH_ADD_STR(ret->vars, name, var);
	}
	{
		struct variable_allocation *var = malloc(sizeof(*var));
		*var = (struct variable_allocation){
		    .name = strdup("shadow-offset-y"), .slot = 10, .index = 10};
		HASH_ADD_STR(ret->vars, name, var);
	}
	{
		struct overridable_slot *override = malloc(sizeof(*override));
		*override = (struct overridable_slot){.name = strdup("opacity"), .slot = 13};
		HASH_ADD_STR(ret->overrides, name, override);
	}
	{
		struct overridable_slot *override = malloc(sizeof(*override));
		*override = (struct overridable_slot){.name = strdup("scale-x"), .slot = 16};
		HASH_ADD_STR(ret->overrides, name, override);
	}
	output_slots[0] = 3;
	output_slots[1] = 4;
	output_slots[2] = 9;
	output_slots[3] = 10;
	output_slots[4] = 0;
	output_slots[5] = 1;
	output_slots[6] = 2;
	output_slots[7] = 5;
	output_slots[8] = 6;
	output_slots[9] = 7;
	output_slots[10] = 8;
	output_slots[11] = -1;
	output_slots[12] = -1;
	output_slots[13] = -1;
	output_slots[14] = -1;
	return ret;
}

static bool win_script_preset__appear(struct win_script *output, config_setting_t *setting) {
	output->script = script_template__appear(output->output_indices);
	double placeholder_duration = 0.200000;
	config_setting_lookup_float(setting, "duration", &placeholder_duration);
	double placeholder_scale = 0.950000;
	config_setting_lookup_float(setting, "scale", &placeholder_scale);
	struct script_specialization_context spec[] = {
	    {.offset = SCRIPT_CTX_PLACEHOLDER_BASE + 0, .value = placeholder_duration},
	    {.offset = SCRIPT_CTX_PLACEHOLDER_BASE + 4, .value = placeholder_scale},
	};
	script_specialize(output->script, spec, ARR_SIZE(spec));
	return true;
}
static struct script *script_template__slide_out(int *output_slots) {
	static const struct instruction instrs[] = {
	    {.type = INST_BRANCH_ONCE, .rel = 24},
	    {.type = INST_LOAD, .slot = 9},
	    {.type = INST_LOAD, .slot = 8},
	    {.type = INST_OP, .op = OP_SUB},
	    {.type = INST_LOAD, .slot = 6},
	    {.type = INST_IMM, .imm = 0.000000},
	    {.type = INST_OP, .op = OP_SUB},
	    {.type = INST_LOAD, .slot = 10},
	    {.type = INST_OP, .op = OP_DIV},
	    {
	        .type = INST_CURVE,
	        .curve = {.type = CURVE_CUBIC_BEZIER,
	                  .bezier = {.ax = -0.650000,
	                             .bx = 1.020000,
	                             .cx = 0.630000,
	                             .ay = -0.020000,
	                             .by = 0.960000,
	                             .cy = 0.060000}},
	    },
	    {.type = INST_OP, .op = OP_MUL},
	    {.type = INST_LOAD, .slot = 8},
	    {.type = INST_OP, .op = OP_ADD},
	    {.type = INST_STORE, .slot = 0},
	    {.type = INST_LOAD, .slot = 0},
	    {.type = INST_STORE, .slot = 1},
	    {.type = INST_LOAD_CTX, .ctx = 0},
	    {.type = INST_STORE, .slot = 2},
	    {.type = INST_LOAD, .slot = 3},
	    {.type = INST_STORE, .slot = 4},
	    {.type = INST_LOAD, .slot = 3},
	    {.type = INST_STORE, .slot = 5},
	    {.type = INST_BRANCH_ONCE, .rel = 12},
	    {.type = INST_HALT},
	    {.type = INST_IMM, .imm = 0.000000},
	    {.type = INST_STORE_OVER_NAN, .slot = 8},
	    {.type = INST_LOAD_CTX, .ctx = 1073741824},
	    {.type = INST_STORE, .slot = 10},
	    {.type = INST_LOAD_CTX, .ctx = 16},
	    {.type = INST_OP, .op = OP_NEG},
	    {.type = INST_STORE, .slot = 9},
	    {.type = INST_IMM, .imm = 1.000000},
	    {.type = INST_STORE, .slot = 3},
	    {.type = INST_BRANCH, .rel = -32},
	    {.type = INST_IMM, .imm = 0.000000},
	    {.type = INST_STORE, .slot = 7},
	    {.type = INST_LOAD, .slot = 10},
	    {.type = INST_IMM, .imm = 0.000000},
	    {.type = INST_OP, .op = OP_ADD},
	    {.type = INST_LOAD, .slot = 7},
	    {.type = INST_OP, .op = OP_MAX},
	    {.type = INST_STORE, .slot = 7},
	    {.type = INST_HALT},
	};
	struct script *ret = malloc(offsetof(struct script, instrs) + sizeof(instrs));
	ret->len = ARR_SIZE(instrs);
	ret->elapsed_slot = 6;
	ret->n_slots = 11;
	ret->stack_size = 3;
	ret->vars = NULL;
	ret->overrides = NULL;
	memcpy(ret->instrs, instrs, sizeof(instrs));
	{
		struct variable_allocation *var = malloc(sizeof(*var));
		*var = (struct variable_allocation){
		    .name = strdup("offset-x"), .slot = 0, .index = 0};
		HASH_ADD_STR(ret->vars, name, var);
	}
	{
		struct variable_allocation *var = malloc(sizeof(*var));
		*var = (struct variable_allocation){
		    .name = strdup("shadow-offset-x"), .slot = 1, .index = 1};
		HASH_ADD_STR(ret->vars, name, var);
	}
	{
		struct variable_allocation *var = malloc(sizeof(*var));
		*var = (struct variable_allocation){
		    .name = strdup("crop-x"), .slot = 2, .index = 2};
		HASH_ADD_STR(ret->vars, name, var);
	}
	{
		struct variable_allocation *var = malloc(sizeof(*var));
		*var = (struct variable_allocation){
		    .name = strdup("opacity"), .slot = 3, .index = 3};
		HASH_ADD_STR(ret->vars, name, var);
	}
	{
		struct variable_allocation *var = malloc(sizeof(*var));
		*var = (struct variable_allocation){
		    .name = strdup("blur-opacity"), .slot = 4, .index = 4};
		HASH_ADD_STR(ret->vars, name, var);
	}
	{
		struct variable_allocation *var = malloc(sizeof(*var));
		*var = (struct variable_allocation){
		    .name = strdup("shadow-opacity"), .slot = 5, .index = 5};
		HASH_ADD_STR(ret->vars, name, var);
	}
	{
		struct overridable_slot *override = malloc(sizeof(*override));
		*override = (struct overridable_slot){.name = strdup("offset-x"), .slot = 8};
		HASH_ADD_STR(ret->overrides, name, override);
	}
	output_slots[0] = 0;
	output_slots[1] = -1;
	output_slots[2] = 1;
	output_slots[3] = -1;
	output_slots[4] = 3;
	output_slots[5] = 4;
	output_slots[6] = 5;
	output_slots[7] = -1;
	output_slots[8] = -1;
	output_slots[9] = -1;
	output_slots[10] = -1;
	output_slots[11] = 2;
	output_slots[12] = -1;
	output_slots[13] = -1;
	output_slots[14] = -1;
	return ret;
}

static bool
win_script_preset__slide_out(struct win_script *output, config_setting_t *setting) {
	output->script = script_template__slide_out(output->output_indices);
	double placeholder_duration = 0.200000;
	config_setting_lookup_float(setting, "duration", &placeholder_duration);
	struct script_specialization_context spec[] = {
	    {.offset = SCRIPT_CTX_PLACEHOLDER_BASE + 0, .value = placeholder_duration},
	};
	script_specialize(output->script, spec, ARR_SIZE(spec));
	return true;
}
static struct script *script_template__slide_in(int *output_slots) {
	static const struct instruction instrs[] = {
	    {.type = INST_BRANCH_ONCE, .rel = 20},
	    {.type = INST_IMM, .imm = 0.000000},
	    {.type = INST_LOAD, .slot = 5},
	    {.type = INST_OP, .op = OP_SUB},
	    {.type = INST_LOAD, .slot = 3},
	    {.type = INST_IMM, .imm = 0.000000},
	    {.type = INST_OP, .op = OP_SUB},
	    {.type = INST_LOAD, .slot = 6},
	    {.type = INST_OP, .op = OP_DIV},
	    {
	        .type = INST_CURVE,
	        .curve = {.type = CURVE_CUBIC_BEZIER,
	                  .bezier = {.ax = -0.650000,
	                             .bx = 0.930000,
	                             .cx = 0.720000,
	                             .ay = -0.020000,
	                             .by = -0.900000,
	                             .cy = 1.920000}},
	    },
	    {.type = INST_OP, .op = OP_MUL},
	    {.type = INST_LOAD, .slot = 5},
	    {.type = INST_OP, .op = OP_ADD},
	    {.type = INST_STORE, .slot = 0},
	    {.type = INST_LOAD, .slot = 0},
	    {.type = INST_STORE, .slot = 1},
	    {.type = INST_LOAD_CTX, .ctx = 0},
	    {.type = INST_STORE, .slot = 2},
	    {.type = INST_BRANCH_ONCE, .rel = 8},
	    {.type = INST_HALT},
	    {.type = INST_LOAD_CTX, .ctx = 16},
	    {.type = INST_OP, .op = OP_NEG},
	    {.type = INST_STORE_OVER_NAN, .slot = 5},
	    {.type = INST_LOAD_CTX, .ctx = 1073741824},
	    {.type = INST_STORE, .slot = 6},
	    {.type = INST_BRANCH, .rel = -24},
	    {.type = INST_IMM, .imm = 0.000000},
	    {.type = INST_STORE, .slot = 4},
	    {.type = INST_LOAD, .slot = 6},
	    {.type = INST_IMM, .imm = 0.000000},
	    {.type = INST_OP, .op = OP_ADD},
	    {.type = INST_LOAD, .slot = 4},
	    {.type = INST_OP, .op = OP_MAX},
	    {.type = INST_STORE, .slot = 4},
	    {.type = INST_HALT},
	};
	struct script *ret = malloc(offsetof(struct script, instrs) + sizeof(instrs));
	ret->len = ARR_SIZE(instrs);
	ret->elapsed_slot = 3;
	ret->n_slots = 7;
	ret->stack_size = 3;
	ret->vars = NULL;
	ret->overrides = NULL;
	memcpy(ret->instrs, instrs, sizeof(instrs));
	{
		struct variable_allocation *var = malloc(sizeof(*var));
		*var = (struct variable_allocation){
		    .name = strdup("offset-x"), .slot = 0, .index = 0};
		HASH_ADD_STR(ret->vars, name, var);
	}
	{
		struct variable_allocation *var = malloc(sizeof(*var));
		*var = (struct variable_allocation){
		    .name = strdup("shadow-offset-x"), .slot = 1, .index = 1};
		HASH_ADD_STR(ret->vars, name, var);
	}
	{
		struct variable_allocation *var = malloc(sizeof(*var));
		*var = (struct variable_allocation){
		    .name = strdup("crop-x"), .slot = 2, .index = 2};
		HASH_ADD_STR(ret->vars, name, var);
	}
	{
		struct overridable_slot *override = malloc(sizeof(*override));
		*override = (struct overridable_slot){.name = strdup("offset-x"), .slot = 5};
		HASH_ADD_STR(ret->overrides, name, override);
	}
	output_slots[0] = 0;
	output_slots[1] = -1;
	output_slots[2] = 1;
	output_slots[3] = -1;
	output_slots[4] = -1;
	output_slots[5] = -1;
	output_slots[6] = -1;
	output_slots[7] = -1;
	output_slots[8] = -1;
	output_slots[9] = -1;
	output_slots[10] = -1;
	output_slots[11] = 2;
	output_slots[12] = -1;
	output_slots[13] = -1;
	output_slots[14] = -1;
	return ret;
}

static bool win_script_preset__slide_in(struct win_script *output, config_setting_t *setting) {
	output->script = script_template__slide_in(output->output_indices);
	double placeholder_duration = 0.200000;
	config_setting_lookup_float(setting, "duration", &placeholder_duration);
	struct script_specialization_context spec[] = {
	    {.offset = SCRIPT_CTX_PLACEHOLDER_BASE + 0, .value = placeholder_duration},
	};
	script_specialize(output->script, spec, ARR_SIZE(spec));
	return true;
}
static struct script *script_template__fly_out(int *output_slots) {
	static const struct instruction instrs[] = {
	    {.type = INST_BRANCH_ONCE, .rel = 18},
	    {.type = INST_LOAD, .slot = 8},
	    {.type = INST_LOAD, .slot = 7},
	    {.type = INST_OP, .op = OP_SUB},
	    {.type = INST_LOAD, .slot = 5},
	    {.type = INST_IMM, .imm = 0.000000},
	    {.type = INST_OP, .op = OP_SUB},
	    {.type = INST_LOAD, .slot = 9},
	    {.type = INST_OP, .op = OP_DIV},
	    {
	        .type = INST_CURVE,
	        .curve = {.type = CURVE_CUBIC_BEZIER,
	                  .bezier = {.ax = -0.920000,
	                             .bx = 1.770000,
	                             .cx = 0.150000,
	                             .ay = 1.150000,
	                             .by = -0.150000,
	                             .cy = 0.000000}},
	    },
	    {.type = INST_OP, .op = OP_MUL},
	    {.type = INST_LOAD, .slot = 7},
	    {.type = INST_OP, .op = OP_ADD},
	    {.type = INST_STORE, .slot = 0},
	    {.type = INST_LOAD, .slot = 0},
	    {.type = INST_STORE, .slot = 1},
	    {.type = INST_BRANCH_ONCE, .rel = 18},
	    {.type = INST_HALT},
	    {.type = INST_IMM, .imm = 0.000000},
	    {.type = INST_STORE_OVER_NAN, .slot = 7},
	    {.type = INST_LOAD_CTX, .ctx = 1073741824},
	    {.type = INST_STORE, .slot = 9},
	    {.type = INST_LOAD_CTX, .ctx = 24},
	    {.type = INST_OP, .op = OP_NEG},
	    {.type = INST_LOAD_CTX, .ctx = 8},
	    {.type = INST_OP, .op = OP_SUB},
	    {.type = INST_STORE, .slot = 8},
	    {.type = INST_IMM, .imm = 1.000000},
	    {.type = INST_STORE, .slot = 2},
	    {.type = INST_IMM, .imm = 1.000000},
	    {.type = INST_STORE, .slot = 3},
	    {.type = INST_IMM, .imm = 1.000000},
	    {.type = INST_STORE, .slot = 4},
	    {.type = INST_BRANCH, .rel = -32},
	    {.type = INST_IMM, .imm = 0.000000},
	    {.type = INST_STORE, .slot = 6},
	    {.type = INST_LOAD, .slot = 9},
	    {.type = INST_IMM, .imm = 0.000000},
	    {.type = INST_OP, .op = OP_ADD},
	    {.type = INST_LOAD, .slot = 6},
	    {.type = INST_OP, .op = OP_MAX},
	    {.type = INST_STORE, .slot = 6},
	    {.type = INST_HALT},
	};
	struct script *ret = malloc(offsetof(struct script, instrs) + sizeof(instrs));
	ret->len = ARR_SIZE(instrs);
	ret->elapsed_slot = 5;
	ret->n_slots = 10;
	ret->stack_size = 3;
	ret->vars = NULL;
	ret->overrides = NULL;
	memcpy(ret->instrs, instrs, sizeof(instrs));
	{
		struct variable_allocation *var = malloc(sizeof(*var));
		*var = (struct variable_allocation){
		    .name = strdup("offset-y"), .slot = 0, .index = 0};
		HASH_ADD_STR(ret->vars, name, var);
	}
	{
		struct variable_allocation *var = malloc(sizeof(*var));
		*var = (struct variable_allocation){
		    .name = strdup("shadow-offset-y"), .slot = 1, .index = 1};
		HASH_ADD_STR(ret->vars, name, var);
	}
	{
		struct variable_allocation *var = malloc(sizeof(*var));
		*var = (struct variable_allocation){
		    .name = strdup("opacity"), .slot = 2, .index = 2};
		HASH_ADD_STR(ret->vars, name, var);
	}
	{
		struct variable_allocation *var = malloc(sizeof(*var));
		*var = (struct variable_allocation){
		    .name = strdup("shadow-opacity"), .slot = 3, .index = 3};
		HASH_ADD_STR(ret->vars, name, var);
	}
	{
		struct variable_allocation *var = malloc(sizeof(*var));
		*var = (struct variable_allocation){
		    .name = strdup("blur-opacity"), .slot = 4, .index = 4};
		HASH_ADD_STR(ret->vars, name, var);
	}
	{
		struct overridable_slot *override = malloc(sizeof(*override));
		*override = (struct overridable_slot){.name = strdup("offset-y"), .slot = 7};
		HASH_ADD_STR(ret->overrides, name, override);
	}
	output_slots[0] = -1;
	output_slots[1] = 0;
	output_slots[2] = -1;
	output_slots[3] = 1;
	output_slots[4] = 2;
	output_slots[5] = 4;
	output_slots[6] = 3;
	output_slots[7] = -1;
	output_slots[8] = -1;
	output_slots[9] = -1;
	output_slots[10] = -1;
	output_slots[11] = -1;
	output_slots[12] = -1;
	output_slots[13] = -1;
	output_slots[14] = -1;
	return ret;
}

static bool win_script_preset__fly_out(struct win_script *output, config_setting_t *setting) {
	output->script = script_template__fly_out(output->output_indices);
	double placeholder_duration = 0.250000;
	config_setting_lookup_float(setting, "duration", &placeholder_duration);
	struct script_specialization_context spec[] = {
	    {.offset = SCRIPT_CTX_PLACEHOLDER_BASE + 0, .value = placeholder_duration},
	};
	script_specialize(output->script, spec, ARR_SIZE(spec));
	return true;
}
static struct script *script_template__fly_in(int *output_slots) {
	static const struct instruction instrs[] = {
	    {.type = INST_BRANCH_ONCE, .rel = 18},
	    {.type = INST_IMM, .imm = 0.000000},
	    {.type = INST_LOAD, .slot = 7},
	    {.type = INST_OP, .op = OP_SUB},
	    {.type = INST_LOAD, .slot = 5},
	    {.type = INST_IMM, .imm = 0.000000},
	    {.type = INST_OP, .op = OP_SUB},
	    {.type = INST_LOAD, .slot = 8},
	    {.type = INST_OP, .op = OP_DIV},
	    {
	        .type = INST_CURVE,
	        .curve = {.type = CURVE_CUBIC_BEZIER,
	                  .bezier = {.ax = -0.530000,
	                             .bx = 1.020000,
	                             .cx = 0.510000,
	                             .ay = -0.080000,
	                             .by = -0.930000,
	                             .cy = 2.010000}},
	    },
	    {.type = INST_OP, .op = OP_MUL},
	    {.type = INST_LOAD, .slot = 7},
	    {.type = INST_OP, .op = OP_ADD},
	    {.type = INST_STORE, .slot = 0},
	    {.type = INST_LOAD, .slot = 0},
	    {.type = INST_STORE, .slot = 1},
	    {.type = INST_BRANCH_ONCE, .rel = 16},
	    {.type = INST_HALT},
	    {.type = INST_LOAD_CTX, .ctx = 24},
	    {.type = INST_OP, .op = OP_NEG},
	    {.type = INST_LOAD_CTX, .ctx = 8},
	    {.type = INST_OP, .op = OP_SUB},
	    {.type = INST_STORE_OVER_NAN, .slot = 7},
	    {.type = INST_LOAD_CTX, .ctx = 1073741824},
	    {.type = INST_STORE, .slot = 8},
	    {.type = INST_IMM, .imm = 1.000000},
	    {.type = INST_STORE, .slot = 2},
	    {.type = INST_IMM, .imm = 1.000000},
	    {.type = INST_STORE, .slot = 3},
	    {.type = INST_IMM, .imm = 1.000000},
	    {.type = INST_STORE, .slot = 4},
	    {.type = INST_BRANCH, .rel = -30},
	    {.type = INST_IMM, .imm = 0.000000},
	    {.type = INST_STORE, .slot = 6},
	    {.type = INST_LOAD, .slot = 8},
	    {.type = INST_IMM, .imm = 0.000000},
	    {.type = INST_OP, .op = OP_ADD},
	    {.type = INST_LOAD, .slot = 6},
	    {.type = INST_OP, .op = OP_MAX},
	    {.type = INST_STORE, .slot = 6},
	    {.type = INST_HALT},
	};
	struct script *ret = malloc(offsetof(struct script, instrs) + sizeof(instrs));
	ret->len = ARR_SIZE(instrs);
	ret->elapsed_slot = 5;
	ret->n_slots = 9;
	ret->stack_size = 3;
	ret->vars = NULL;
	ret->overrides = NULL;
	memcpy(ret->instrs, instrs, sizeof(instrs));
	{
		struct variable_allocation *var = malloc(sizeof(*var));
		*var = (struct variable_allocation){
		    .name = strdup("offset-y"), .slot = 0, .index = 0};
		HASH_ADD_STR(ret->vars, name, var);
	}
	{
		struct variable_allocation *var = malloc(sizeof(*var));
		*var = (struct variable_allocation){
		    .name = strdup("shadow-offset-y"), .slot = 1, .index = 1};
		HASH_ADD_STR(ret->vars, name, var);
	}
	{
		struct variable_allocation *var = malloc(sizeof(*var));
		*var = (struct variable_allocation){
		    .name = strdup("opacity"), .slot = 2, .index = 2};
		HASH_ADD_STR(ret->vars, name, var);
	}
	{
		struct variable_allocation *var = malloc(sizeof(*var));
		*var = (struct variable_allocation){
		    .name = strdup("shadow-opacity"), .slot = 3, .index = 3};
		HASH_ADD_STR(ret->vars, name, var);
	}
	{
		struct variable_allocation *var = malloc(sizeof(*var));
		*var = (struct variable_allocation){
		    .name = strdup("blur-opacity"), .slot = 4, .index = 4};
		HASH_ADD_STR(ret->vars, name, var);
	}
	{
		struct overridable_slot *override = malloc(sizeof(*override));
		*override = (struct overridable_slot){.name = strdup("offset-y"), .slot = 7};
		HASH_ADD_STR(ret->overrides, name, override);
	}
	output_slots[0] = -1;
	output_slots[1] = 0;
	output_slots[2] = -1;
	output_slots[3] = 1;
	output_slots[4] = 2;
	output_slots[5] = 4;
	output_slots[6] = 3;
	output_slots[7] = -1;
	output_slots[8] = -1;
	output_slots[9] = -1;
	output_slots[10] = -1;
	output_slots[11] = -1;
	output_slots[12] = -1;
	output_slots[13] = -1;
	output_slots[14] = -1;
	return ret;
}

static bool win_script_preset__fly_in(struct win_script *output, config_setting_t *setting) {
	output->script = script_template__fly_in(output->output_indices);
	double placeholder_duration = 0.250000;
	config_setting_lookup_float(setting, "duration", &placeholder_duration);
	struct script_specialization_context spec[] = {
	    {.offset = SCRIPT_CTX_PLACEHOLDER_BASE + 0, .value = placeholder_duration},
	};
	script_specialize(output->script, spec, ARR_SIZE(spec));
	return true;
}
struct {
	const char *name;
	bool (*func)(struct win_script *output, config_setting_t *setting);
} win_script_presets[] = {
    {"disappear", win_script_preset__disappear},
    {"appear", win_script_preset__appear},
    {"slide-out", win_script_preset__slide_out},
    {"slide-in", win_script_preset__slide_in},
    {"fly-out", win_script_preset__fly_out},
    {"fly-in", win_script_preset__fly_in},
    {NULL, NULL},
};
