// Copyright (c) rAthena Dev Teams - Licensed under GNU GPL
// For more information, see LICENCE in the main folder

/**
 * Custom Atcommands
 * Place the body of custom atcommands in this file.
 * Format:
 *	ACMD_FUNC(command_name)
 *	{
 *		<code>;
 *	}
 **/

//ACMD_FUNC(newcommand)
//{
//	clif_displaymessage(fd, "It works!");
//	clif_specialeffect(&sd->bl, EF_HEARTCASTING, AREA);
//	return 0;
//}

/*==========================================
 * @debuff by Start's
 * reduces player damage / defense and flee by percentage
 * reduces player bonus by percentage
 *------------------------------------------*/
ACMD_FUNC(debuff)
{
	int value = 0;
	int value2 = 0;
	nullpo_retr(-1, sd);
	char temp[CHAT_SIZE_MAX];

	memset(temp, '\0', sizeof(temp));

	if (!message || !*message || (sscanf(message, "%11d %11d", &value, &value2) < 2))
		return -1;

	sd->debuff = cap_value(value,0,100);
	sd->bonusDebuff = cap_value(value2,0,100);

	StringBuf buf;
	StringBuf_Init(&buf);
	StringBuf_Printf(&buf, msg_txt(sd,1539), sd->debuff, sd->bonusDebuff); // Debuff: %d | Item Bonus อ่อนแอลง: %d
	clif_displaymessage(fd, StringBuf_Value(&buf));
	StringBuf_Destroy(&buf);

	status_calc_pc(sd,SCO_NONE);

	return 0;
}

/*==========================================
 * @cleartimetick by Start's
 * Clear main item drop timetick
 *------------------------------------------*/
ACMD_FUNC(cleartimetick)
{
	nullpo_retr(-1, sd);

	sd->main_item_drop_delay = 0;

	return 0;
}
