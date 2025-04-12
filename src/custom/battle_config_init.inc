// Copyright (c) rAthena Dev Teams - Licensed under GNU GPL
// For more information, see LICENCE in the main folder

/**
 * Custom battle config initializations
 * Place the definition of custom battle configuration initializations in this file.
 *
 * Do not forget to add a comma at the end of the line, if you want to add another config
 *
 * Format:
 *	 { "name", &battle_config.<variable name>, <default value>, <minimum value>, <maximum value> },
 **/

 { "config_global_maximum_sell", &battle_config.config_global_maximum_sell, 5000, 0, INT_MAX },
 { "config_global_drop", &battle_config.config_global_drop, 10000001, 0, INT_MAX },
 { "config_global_drop_base_rate", &battle_config.config_global_drop_base_rate, 1, 0, INT_MAX },
 { "config_global_mvp_drop", &battle_config.config_global_mvp_drop, 10000000, 0, INT_MAX },
 { "config_global_mvp_drop_rate", &battle_config.config_global_mvp_drop_rate, 1, 0, INT_MAX },
 { "config_main_item_drop_id", &battle_config.config_main_item_drop_id, 10000001, 0, INT_MAX },
 { "config_main_item_drop_delay", &battle_config.config_main_item_drop_delay, 1, 0, INT_MAX },
 { "config_invulnerable_break_rate", &battle_config.config_invulnerable_break_rate, 50, 0, 100 },
 { "config_invulnerable_break_value", &battle_config.config_invulnerable_break_value, 100, 0, 1000 },
 { "config_infinite_defense_break_rate", &battle_config.config_infinite_defense_break_rate, 10, 0, 100 },
 { "config_perfect_dodge_break_rate", &battle_config.config_perfect_dodge_break_rate, 50, 0, 100 },
 { "config_perfect_dodge_break_value", &battle_config.config_perfect_dodge_break_value, 900, 0, 1000 },
 { "config_enchantment_clickable", &battle_config.config_enchantment_clickable, 1, 0, 1 },
 { "config_enchantment_maximum", &battle_config.config_enchantment_maximum, 4, 0, 4 },
 { "config_all_equipment_refinable", &battle_config.config_all_equipment_refinable, 1, 0, 1 },
 { "config_all_equipment_gradable", &battle_config.config_all_equipment_gradable, 1, 0, 1 },
 { "config_all_equipment_skip_gender", &battle_config.config_all_equipment_skip_gender, 0, 0, 1 },
 { "config_all_equipment_skip_class", &battle_config.config_all_equipment_skip_class, 0, 0, 1 },
 { "config_all_equipment_skip_job", &battle_config.config_all_equipment_skip_job, 0, 0, 1 },
 { "config_all_item_buying_store", &battle_config.config_all_item_buying_store, 1, 0, 1 },
 { "config_all_item_no_bind", &battle_config.config_all_item_no_bind, 1, 0, 1 },
 { "config_all_item_trade", &battle_config.config_all_item_trade, 1, 0, 1 },
 { "config_equipment_drop_auto_identify", &battle_config.config_equipment_drop_auto_identify, 1, 0, 1 },
 { "config_random_monster_rank", &battle_config.config_random_monster_rank, 91, 0, 50000 },
 { "config_auto_trade_player_count", &battle_config.config_auto_trade_player_count, 0, 0, 1 },
 { "config_monster_rank_damage_mode", &battle_config.config_monster_rank_damage_mode, 0, 0, 1 },
 { "config_monster_rank_defense_mode", &battle_config.config_monster_rank_defense_mode, 0, 0, 1 },
 { "config_monster_rank_exp_bonus_mode", &battle_config.config_monster_rank_exp_bonus_mode, 0, 0, 1 },
 { "config_monster_rank_drop_bonus_mode", &battle_config.config_monster_rank_drop_bonus_mode, 0, 0, 1 },
