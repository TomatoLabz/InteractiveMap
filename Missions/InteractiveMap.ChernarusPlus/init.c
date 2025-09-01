void main()
{
    //INIT WEATHER BEFORE ECONOMY INIT------------------------
    Weather weather = g_Game.GetWeather();

    weather.MissionWeather(false);    // false = use weather controller from Weather.c

    weather.GetOvercast().Set( Math.RandomFloatInclusive(0.4, 0.6), 1, 0);
    weather.GetRain().Set( 0, 0, 1);
    weather.GetFog().Set( Math.RandomFloatInclusive(0.05, 0.1), 1, 0);

    //DATE RESET AFTER ECONOMY INIT-------------------------
    int year, month, day, hour, minute;
    int reset_month = 9, reset_day = 20;
    GetGame().GetWorld().GetDate(year, month, day, hour, minute);

    if ((month == reset_month) && (day < reset_day))
    {
        GetGame().GetWorld().SetDate(year, reset_month, reset_day, hour, minute);
    }
    else
    {
        if ((month == reset_month + 1) && (day > reset_day))
        {
            GetGame().GetWorld().SetDate(year, reset_month, reset_day, hour, minute);
        }
        else
        {
            if ((month < reset_month) || (month > reset_month + 1))
            {
                GetGame().GetWorld().SetDate(year, reset_month, reset_day, hour, minute);
            }
        }
    }
}

/*
class CustomMission : MissionServer
{
    void SetRandomHealth(EntityAI itemEnt)
    {
        if (itemEnt)
        {
            float rndHlt = Math.RandomFloat(0.45, 0.65);
            itemEnt.SetHealth01("", "", rndHlt);
        }
    }

    override PlayerBase CreateCharacter(PlayerIdentity identity, vector pos, ParamsReadContext ctx, string characterName)
    {
        Entity playerEnt;
        playerEnt = GetGame().CreatePlayer(identity, characterName, pos, 0, "NONE");
        Class.CastTo(m_player, playerEnt);

        GetGame().SelectPlayer(identity, m_player);

        return m_player;
    }

    override void StartingEquipSetup(PlayerBase player, bool clothesChosen)
    {
        player.RemoveAllItems();

        EntityAI itemEnt;
        ItemBase itemBs;
        float rand;

        switch (Math.RandomInt(0, 5))
        {

            case 0:
                // Kits0
                player.GetInventory().CreateInInventory("Jeans_Black"); itemBs = ItemBase.Cast(itemEnt);
                player.GetInventory().CreateInInventory("Shirt_BlueCheckBright"); itemBs = ItemBase.Cast(itemEnt);
                player.GetInventory().CreateInInventory("AthleticShoes_Black"); itemBs = ItemBase.Cast(itemEnt);
                player.GetInventory().CreateInInventory("SodaCan_Pipsi"); itemBs = ItemBase.Cast(itemEnt);
                player.GetInventory().CreateInInventory("Plum"); itemBs = ItemBase.Cast(itemEnt);
                player.GetInventory().CreateInInventory("Rag"); itemBs = ItemBase.Cast(itemEnt);
                player.GetInventory().CreateInInventory("CombatKnife"); itemBs = ItemBase.Cast(itemEnt);

                break;

            case 1:
                // Kits1
                player.GetInventory().CreateInInventory("Jeans_Grey"); itemBs = ItemBase.Cast(itemEnt);
                player.GetInventory().CreateInInventory("Shirt_GreenCheck"); itemBs = ItemBase.Cast(itemEnt);
                player.GetInventory().CreateInInventory("AthleticShoes_Brown"); itemBs = ItemBase.Cast(itemEnt);
                player.GetInventory().CreateInInventory("SodaCan_Spite"); itemBs = ItemBase.Cast(itemEnt);
                player.GetInventory().CreateInInventory("Apple"); itemBs = ItemBase.Cast(itemEnt);
                player.GetInventory().CreateInInventory("Rag"); itemBs = ItemBase.Cast(itemEnt);
                player.GetInventory().CreateInInventory("CombatKnife"); itemBs = ItemBase.Cast(itemEnt);

                break;

            case 2:
                // Kits2
                player.GetInventory().CreateInInventory("Jeans_Blue"); itemBs = ItemBase.Cast(itemEnt);
                player.GetInventory().CreateInInventory("Shirt_PlaneBlack"); itemBs = ItemBase.Cast(itemEnt);
                player.GetInventory().CreateInInventory("AthleticShoes_Green"); itemBs = ItemBase.Cast(itemEnt);
                player.GetInventory().CreateInInventory("SodaCan_Kvass"); itemBs = ItemBase.Cast(itemEnt);
                player.GetInventory().CreateInInventory("Pear"); itemBs = ItemBase.Cast(itemEnt);
                player.GetInventory().CreateInInventory("Rag"); itemBs = ItemBase.Cast(itemEnt);
                player.GetInventory().CreateInInventory("CombatKnife"); itemBs = ItemBase.Cast(itemEnt);

                break;

            case 3:
                // Kits3
                player.GetInventory().CreateInInventory("Jeans_Grey"); itemBs = ItemBase.Cast(itemEnt);
                player.GetInventory().CreateInInventory("Shirt_WhiteCheck"); itemBs = ItemBase.Cast(itemEnt);
                player.GetInventory().CreateInInventory("Sneakers_Gray"); itemBs = ItemBase.Cast(itemEnt);
                player.GetInventory().CreateInInventory("SodaCan_Fronta"); itemBs = ItemBase.Cast(itemEnt);
                player.GetInventory().CreateInInventory("Plum"); itemBs = ItemBase.Cast(itemEnt);
                player.GetInventory().CreateInInventory("Rag"); itemBs = ItemBase.Cast(itemEnt);
                player.GetInventory().CreateInInventory("CombatKnife"); itemBs = ItemBase.Cast(itemEnt);

                break;

            case 4:
                // Kits4
                player.GetInventory().CreateInInventory("Jeans_BlueDark"); itemBs = ItemBase.Cast(itemEnt);
                player.GetInventory().CreateInInventory("Shirt_RedCheck"); itemBs = ItemBase.Cast(itemEnt);
                player.GetInventory().CreateInInventory("Sneakers_Black"); itemBs = ItemBase.Cast(itemEnt);
                player.GetInventory().CreateInInventory("SodaCan_Cola"); itemBs = ItemBase.Cast(itemEnt);
                player.GetInventory().CreateInInventory("Pear"); itemBs = ItemBase.Cast(itemEnt);
                player.GetInventory().CreateInInventory("Rag"); itemBs = ItemBase.Cast(itemEnt);
                player.GetInventory().CreateInInventory("CombatKnife"); itemBs = ItemBase.Cast(itemEnt);

                break;
        }
    }
}*/