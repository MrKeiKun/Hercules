/**
 * This file is part of Hercules.
 * http://herc.ws - http://github.com/HerculesWS/Hercules
 *
 * Copyright (C) 2013-2022 Hercules Dev Team
 * Copyright (C) 2018-2022 Andrei Karas (4144)
 *
 * Hercules is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

//Included directly by clif.c in packet_loaddb()

#ifndef MAP_PACKETS_SHUFFLE_ZERO_H
#define MAP_PACKETS_SHUFFLE_ZERO_H

#ifndef packet
	#define packet(a,...)
#endif

/*
 * packet syntax
 * - packet(packet_id,function,offset ( specifies the offset of a packet field in bytes from the begin of the packet ),...)
 * - Example: packet(0x0072,clif->pWantToConnection,2,6,10,14,18);
 */

/* This file is autogenerated, please do not commit manual changes */


// 2017-10-18aRagexe_zero, 2017-10-19aRagexe_zero, 2017-10-23aRagexe_zero, 2017-10-23bRagexe_zero, 2017-10-23cRagexe_zero, 2017-10-24aRagexe_2_zero, 2017-10-24aRagexe_zero, 2017-10-25bRagexe_zero, 2017-10-27aRagexe_zero, 2017-10-27bRagexe_zero, 2017-10-30aRagexe_zero, 2017-10-31aRagexe_zero, 2017-11-09aRagexe_zero, 2017-11-13aRagexe_zero, 2017-11-13bRagexe_zero, 2018-03-15aRagexe_zero, 2018-03-21aRagexe_zero, 2018-03-21bRagexe_zero, 2018-03-28_1aRagexe_zero, 2018-03-28cRagexe_zero, 2018-04-11aRagexe_zero, 2018-04-25_3aRagexe_zero, 2018-05-09_3aRagexe_zero, 2018-05-23aRagexe_zero, 2018-06-05bRagexe_zero, 2018-06-05cRagexe_zero, 2018-06-27aRagexe_zero, 2018-07-03aRagexe_zero, 2018-07-11_2aRagexe_zero, 2018-07-25_2aRagexe_zero, 2018-08-01aRagexe_zero, 2018-08-08_2aRagexe_zero, 2018-08-22aRagexe_zero, 2018-08-29aRagexe_zero, 2018-09-05aRagexe_zero, 2018-09-12aRagexe_zero, 2018-09-19aRagexe_zero, 2018-09-28aRagexe_zero, 2018-10-10_2aRagexe_zero, 2018-10-24_2aRagexe_zero, 2018-11-14aRagexe_zero, 2018-11-20aRagexe_zero, 2018-11-28aRagexe_zero, 2018-12-12aRagexe_zero, 2018-12-19aRagexe_zero, 2018-12-26_2aRagexe_zero, 2019-01-16_2aRagexe_zero, 2019-01-17_1aRagexe_zero, 2019-01-30_2aRagexe_zero, 2019-02-13aRagexe_zero, 2019-02-20aRagexe_zero, 2019-02-27aRagexe_zero, 2019-03-13aRagexe_zero, 2019-03-27_2aRagexe_zero, 2019-03-27_3aRagexe_zero, 2019-04-03aRagexe_zero, 2019-04-10bRagexe_zero, 2019-04-24aRagexe_zero, 2019-05-02aRagexe_zero, 2019-05-08_2aRagexe_zero, 2019-05-08aRagexe_zero, 2019-05-15aRagexe_zero, 2019-05-29aRagexe_zero, 2019-05-30aRagexe_zero, 2019-06-05_2aRagexe_zero, 2019-06-26_2aRagexe_zero, 2019-06-26_3aRagexe_zero, 2019-07-09aRagexe_zero, 2019-07-10_3aRagexe_zero, 2019-07-17aRagexe_zero, 2019-07-24aRagexe_zero, 2019-08-14_3aRagexe_zero, 2019-08-28_2aRagexe_zero, 2019-08-28_3aRagexe_zero, 2019-09-11aRagexe_zero, 2019-09-18_2aRagexe_zero, 2019-09-18aRagexe_zero, 2019-09-25_3aRagexe_zero, 2019-09-25_5aRagexe_zero, 2019-10-08_2aRagexe_zero, 2019-10-23_2aRagexe_zero, 2019-11-06aRagexe_zero, 2019-11-13aRagexe_zero, 2019-11-27_2aRagexe_zero, 2019-11-27aRagexe_zero, 2019-12-04aRagexe_zero, 2019-12-11_2aRagexe_zero, 2019-12-24_4aRagexe_zero, 2019-12-24_5aRagexe_zero, 2020-01-15_2aRagexe_zero, 2020-01-15aRagexe_zero, 2020-01-29_2aRagexe_zero, 2020-01-29aRagexe_zero, 2020-02-12aRagexe_zero, 2020-02-26aRagexe_zero, 2020-02-26bRagexe_zero, 2020-03-04aRagexe_zero, 2020-03-18_2aRagexe_zero, 2020-04-01_2aRagexe_zero, 2020-04-14bRagexe_zero, 2020-05-06aRagexe_zero, 2020-05-20_5aRagexe_zero, 2020-06-03_2aRagexe_zero, 2020-06-17aRagexe_zero, 2020-07-01_2aRagexe_zero, 2020-07-01aRagexe_zero, 2020-07-29cRagexe_zero, 2020-08-05bRagexe_zero, 2020-08-05cRagexe_zero, 2020-09-02aRagexe_zero, 2020-10-21aRagexe_zero, 2020-11-18aRagexe_zero, 2020-12-01aRagexe_zero, 2020-12-02aRagexe_zero, 2020-12-02bRagexe_zero, 2020-12-16_Ragexe_1607900518_zero, 2020-12-16_Ragexe_1608018700_zero, 2020-12-16_Ragexe_1608022476_zero, 2021-01-06_Ragexe_1609306194_zero, 2021-01-06_Ragexe_1609309495_zero, 2021-01-06_Ragexe_1609384473_zero, 2021-02-17_Ragexe_1613356634_zero, 2021-02-17_Ragexe_1613458896_zero, 2021-03-17_Ragexe_1615443244_zero, 2021-03-31_Ragexe_1616645609_zero, 2021-03-31_Ragexe_1617104920_zero, 2021-04-01_Ragexe_1617260946_zero, 2021-04-21_Ragexe_1618471411_zero, 2021-05-04_Ragexe_1619749621_zero, 2021-05-12_Ragexe_1620788657_zero, 2021-05-12_Ragexe_1620795325_zero, 2021-05-18_Ragexe_1620875688_zero, 2021-06-16_Ragexe_1623310696_zero, 2021-06-16_Ragexe_1623398452_zero, 2021-06-16_Ragexe_1623738726_zero, 2021-06-16_Ragexe_1623830377_zero, 2021-06-16_Ragexe_1623845562_zero, 2021-06-23_Ragexe_1624430023_zero
#if PACKETVER == 20171018 || \
    PACKETVER == 20171019 || \
    PACKETVER == 20171023 || \
    PACKETVER == 20171024 || \
    PACKETVER == 20171025 || \
    PACKETVER == 20171027 || \
    PACKETVER == 20171030 || \
    PACKETVER == 20171031 || \
    PACKETVER == 20171109 || \
    PACKETVER == 20171113 || \
    PACKETVER == 20180315 || \
    PACKETVER == 20180321 || \
    PACKETVER == 20180328 || \
    PACKETVER == 20180411 || \
    PACKETVER == 20180425 || \
    PACKETVER == 20180509 || \
    PACKETVER == 20180523 || \
    PACKETVER == 20180605 || \
    PACKETVER == 20180627 || \
    PACKETVER == 20180703 || \
    PACKETVER == 20180711 || \
    PACKETVER == 20180725 || \
    PACKETVER == 20180801 || \
    PACKETVER == 20180808 || \
    PACKETVER == 20180822 || \
    PACKETVER == 20180829 || \
    PACKETVER == 20180905 || \
    PACKETVER == 20180912 || \
    PACKETVER == 20180919 || \
    PACKETVER == 20180928 || \
    PACKETVER == 20181010 || \
    PACKETVER == 20181024 || \
    PACKETVER == 20181114 || \
    PACKETVER == 20181120 || \
    PACKETVER == 20181128 || \
    PACKETVER == 20181212 || \
    PACKETVER == 20181219 || \
    PACKETVER == 20181226 || \
    PACKETVER == 20190116 || \
    PACKETVER == 20190117 || \
    PACKETVER == 20190130 || \
    PACKETVER == 20190213 || \
    PACKETVER == 20190220 || \
    PACKETVER == 20190227 || \
    PACKETVER == 20190313 || \
    PACKETVER == 20190327 || \
    PACKETVER == 20190403 || \
    PACKETVER == 20190410 || \
    PACKETVER == 20190424 || \
    PACKETVER == 20190502 || \
    PACKETVER == 20190508 || \
    PACKETVER == 20190515 || \
    PACKETVER == 20190529 || \
    PACKETVER == 20190530 || \
    PACKETVER == 20190605 || \
    PACKETVER == 20190626 || \
    PACKETVER == 20190709 || \
    PACKETVER == 20190710 || \
    PACKETVER == 20190717 || \
    PACKETVER == 20190724 || \
    PACKETVER == 20190814 || \
    PACKETVER == 20190828 || \
    PACKETVER == 20190911 || \
    PACKETVER == 20190918 || \
    PACKETVER == 20190925 || \
    PACKETVER == 20191008 || \
    PACKETVER == 20191023 || \
    PACKETVER == 20191106 || \
    PACKETVER == 20191113 || \
    PACKETVER == 20191127 || \
    PACKETVER == 20191204 || \
    PACKETVER == 20191211 || \
    PACKETVER == 20191224 || \
    PACKETVER == 20200115 || \
    PACKETVER == 20200129 || \
    PACKETVER == 20200212 || \
    PACKETVER == 20200226 || \
    PACKETVER == 20200304 || \
    PACKETVER == 20200318 || \
    PACKETVER == 20200401 || \
    PACKETVER == 20200414 || \
    PACKETVER == 20200506 || \
    PACKETVER == 20200520 || \
    PACKETVER == 20200603 || \
    PACKETVER == 20200617 || \
    PACKETVER == 20200701 || \
    PACKETVER == 20200729 || \
    PACKETVER == 20200805 || \
    PACKETVER == 20200902 || \
    PACKETVER == 20201021 || \
    PACKETVER == 20201118 || \
    PACKETVER == 20201201 || \
    PACKETVER == 20201202 || \
    PACKETVER == 20201216 || \
    PACKETVER == 20210106 || \
    PACKETVER == 20210217 || \
    PACKETVER == 20210317 || \
    PACKETVER == 20210331 || \
    PACKETVER == 20210401 || \
    PACKETVER == 20210421 || \
    PACKETVER == 20210504 || \
    PACKETVER == 20210512 || \
    PACKETVER == 20210518 || \
    PACKETVER == 20210616 || \
    PACKETVER == 20210623
	packet(0x0202,clif->pFriendsListAdd,2);
	packet(0x022d,clif->pHomMenu,2,4);
	packet(0x023b,clif->pStoragePassword,0);
	packet(0x0281,clif->pDull/*,XXX*/);
	packet(0x02c4,clif->pPartyInvite2,2);
	packet(0x035f,clif->pWalkToXY,2);
	packet(0x0360,clif->pTickSend,2);
	packet(0x0361,clif->pChangeDir,2,4);
	packet(0x0362,clif->pTakeItem,2);
	packet(0x0363,clif->pDropItem,2,4);
	packet(0x0364,clif->pMoveToKafra,2,4);
	packet(0x0365,clif->pMoveFromKafra,2,4);
	packet(0x0366,clif->pUseSkillToPos,2,4,6,8);
	packet(0x0367,clif->pUseSkillToPosMoreInfo,2,4,6,8,10);
	packet(0x0368,clif->pGetCharNameRequest,2);
	packet(0x0369,clif->pSolveCharName,2);
	packet(0x0436,clif->pWantToConnection,2,6,10,14,18);
	packet(0x0437,clif->pActionRequest,2,6);
	packet(0x0438,clif->pUseSkillToId,2,4,6);
	packet(0x07e4,clif->pItemListWindowSelected,2,4,8);
	packet(0x07ec,clif->pDull/*,XXX*/);
	packet(0x0802,clif->pPartyBookingRegisterReq,2,4);
	packet(0x0811,clif->pReqOpenBuyingStore,2,4,8,9,89);
	packet(0x0815,clif->pReqCloseBuyingStore,0);
	packet(0x0817,clif->pReqClickBuyingStore,2);
	packet(0x0819,clif->pReqTradeBuyingStore,2,4,8,12);
	packet(0x0835,clif->pSearchStoreInfo,2,4,5,9,13,14,15);
	packet(0x0838,clif->pSearchStoreInfoNextPage,0);
	packet(0x083c,clif->pSearchStoreInfoListItemClick,2,6,10);
#endif

// 2017-11-15aRagexe_zero, 2017-11-15bRagexe_zero, 2017-11-16aRagexe_zero, 2017-11-17aRagexe_zero
#if PACKETVER == 20171115 || \
    PACKETVER == 20171116 || \
    PACKETVER == 20171117
	packet(0x0281,clif->pItemListWindowSelected,2,4,8);
	packet(0x035f,clif->pTickSend,2);
	packet(0x0360,clif->pReqClickBuyingStore,2);
	packet(0x0362,clif->pDropItem,2,4);
	packet(0x0363,clif->pDull/*,XXX*/);
	packet(0x0364,clif->pMoveFromKafra,2,4);
	packet(0x0365,clif->pPartyBookingRegisterReq,2,4);
	packet(0x0366,clif->pUseSkillToPosMoreInfo,2,4,6,8,10);
	packet(0x0368,clif->pSolveCharName,2);
	packet(0x0369,clif->pActionRequest,2,6);
	packet(0x0437,clif->pWalkToXY,2);
	packet(0x0438,clif->pUseSkillToPos,2,4,6,8);
	packet(0x07e4,clif->pTakeItem,2);
	packet(0x07ec,clif->pMoveToKafra,2,4);
	packet(0x0802,clif->pPartyInvite2,2);
	packet(0x0811,clif->pReqTradeBuyingStore,2,4,8,12);
	packet(0x0815,clif->pReqOpenBuyingStore,2,4,8,9,89);
	packet(0x0817,clif->pReqCloseBuyingStore,0);
	packet(0x0819,clif->pSearchStoreInfo,2,4,5,9,13,14,15);
	packet(0x0835,clif->pSearchStoreInfoNextPage,0);
	packet(0x0838,clif->pSearchStoreInfoListItemClick,2,6,10);
	packet(0x083c,clif->pUseSkillToId,2,4,6);
	packet(0x0860,clif->pDull/*,XXX*/);
	packet(0x0881,clif->pWantToConnection,2,6,10,14,18);
	packet(0x091c,clif->pHomMenu,2,4);
	packet(0x0922,clif->pStoragePassword,0);
	packet(0x0959,clif->pChangeDir,2,4);
	packet(0x0966,clif->pFriendsListAdd,2);
	packet(0x096a,clif->pGetCharNameRequest,2);
#endif

// 2017-11-21aRagexe_zero, 2017-11-22aRagexe_zero
#if PACKETVER == 20171121 || \
    PACKETVER == 20171122
	packet(0x0202,clif->pStoragePassword,0);
	packet(0x022d,clif->pReqTradeBuyingStore,2,4,8,12);
	packet(0x035f,clif->pTickSend,2);
	packet(0x0360,clif->pReqClickBuyingStore,2);
	packet(0x0362,clif->pDropItem,2,4);
	packet(0x0363,clif->pItemListWindowSelected,2,4,8);
	packet(0x0366,clif->pUseSkillToPosMoreInfo,2,4,6,8,10);
	packet(0x0368,clif->pSolveCharName,2);
	packet(0x0369,clif->pActionRequest,2,6);
	packet(0x0437,clif->pWalkToXY,2);
	packet(0x0438,clif->pUseSkillToPos,2,4,6,8);
	packet(0x0811,clif->pHomMenu,2,4);
	packet(0x0815,clif->pReqOpenBuyingStore,2,4,8,9,89);
	packet(0x0817,clif->pReqCloseBuyingStore,0);
	packet(0x0819,clif->pSearchStoreInfo,2,4,5,9,13,14,15);
	packet(0x0835,clif->pSearchStoreInfoNextPage,0);
	packet(0x0838,clif->pSearchStoreInfoListItemClick,2,6,10);
	packet(0x083c,clif->pUseSkillToId,2,4,6);
	packet(0x0866,clif->pMoveToKafra,2,4);
	packet(0x0889,clif->pMoveFromKafra,2,4);
	packet(0x0892,clif->pPartyBookingRegisterReq,2,4);
	packet(0x089e,clif->pChangeDir,2,4);
	packet(0x08ad,clif->pPartyInvite2,2);
	packet(0x0918,clif->pTakeItem,2);
	packet(0x091f,clif->pWantToConnection,2,6,10,14,18);
	packet(0x0928,clif->pFriendsListAdd,2);
	packet(0x0943,clif->pDull/*,XXX*/);
	packet(0x0950,clif->pDull/*,XXX*/);
	packet(0x096a,clif->pGetCharNameRequest,2);
#endif

// 2017-11-23dRagexe_zero
#if PACKETVER == 20171123
	packet(0x035f,clif->pTickSend,2);
	packet(0x0360,clif->pReqClickBuyingStore,2);
	packet(0x0366,clif->pUseSkillToPosMoreInfo,2,4,6,8,10);
	packet(0x0367,clif->pHomMenu,2,4);
	packet(0x0368,clif->pSolveCharName,2);
	packet(0x0369,clif->pActionRequest,2,6);
	packet(0x0437,clif->pWalkToXY,2);
	packet(0x0438,clif->pUseSkillToPos,2,4,6,8);
	packet(0x0811,clif->pReqTradeBuyingStore,2,4,8,12);
	packet(0x0815,clif->pReqOpenBuyingStore,2,4,8,9,89);
	packet(0x0817,clif->pReqCloseBuyingStore,0);
	packet(0x0819,clif->pSearchStoreInfo,2,4,5,9,13,14,15);
	packet(0x0835,clif->pSearchStoreInfoNextPage,0);
	packet(0x0838,clif->pSearchStoreInfoListItemClick,2,6,10);
	packet(0x083c,clif->pUseSkillToId,2,4,6);
	packet(0x085f,clif->pDropItem,2,4);
	packet(0x0860,clif->pWantToConnection,2,6,10,14,18);
	packet(0x0876,clif->pDull/*,XXX*/);
	packet(0x0882,clif->pItemListWindowSelected,2,4,8);
	packet(0x088c,clif->pPartyInvite2,2);
	packet(0x0896,clif->pChangeDir,2,4);
	packet(0x089e,clif->pPartyBookingRegisterReq,2,4);
	packet(0x08a8,clif->pFriendsListAdd,2);
	packet(0x092b,clif->pMoveToKafra,2,4);
	packet(0x0930,clif->pTakeItem,2);
	packet(0x0935,clif->pMoveFromKafra,2,4);
	packet(0x0947,clif->pStoragePassword,0);
	packet(0x0960,clif->pDull/*,XXX*/);
	packet(0x096a,clif->pGetCharNameRequest,2);
#endif

// 2017-11-27aRagexe_zero, 2017-11-27cRagexe_zero, 2017-11-28aRagexe_zero
#if PACKETVER == 20171127 || \
    PACKETVER == 20171128
	packet(0x0202,clif->pChangeDir,2,4);
	packet(0x022d,clif->pWantToConnection,2,6,10,14,18);
	packet(0x023b,clif->pFriendsListAdd,2);
	packet(0x0281,clif->pItemListWindowSelected,2,4,8);
	packet(0x035f,clif->pTickSend,2);
	packet(0x0360,clif->pReqClickBuyingStore,2);
	packet(0x0361,clif->pHomMenu,2,4);
	packet(0x0362,clif->pDropItem,2,4);
	packet(0x0363,clif->pDull/*,XXX*/);
	packet(0x0364,clif->pMoveFromKafra,2,4);
	packet(0x0365,clif->pPartyBookingRegisterReq,2,4);
	packet(0x0366,clif->pUseSkillToPosMoreInfo,2,4,6,8,10);
	packet(0x0368,clif->pSolveCharName,2);
	packet(0x0369,clif->pActionRequest,2,6);
	packet(0x0436,clif->pDull/*,XXX*/);
	packet(0x0437,clif->pWalkToXY,2);
	packet(0x0438,clif->pUseSkillToPos,2,4,6,8);
	packet(0x07e4,clif->pTakeItem,2);
	packet(0x07ec,clif->pMoveToKafra,2,4);
	packet(0x0802,clif->pPartyInvite2,2);
	packet(0x0811,clif->pReqTradeBuyingStore,2,4,8,12);
	packet(0x0815,clif->pReqOpenBuyingStore,2,4,8,9,89);
	packet(0x0817,clif->pReqCloseBuyingStore,0);
	packet(0x0819,clif->pSearchStoreInfo,2,4,5,9,13,14,15);
	packet(0x0835,clif->pSearchStoreInfoNextPage,0);
	packet(0x0838,clif->pSearchStoreInfoListItemClick,2,6,10);
	packet(0x083c,clif->pUseSkillToId,2,4,6);
	packet(0x0893,clif->pStoragePassword,0);
	packet(0x096a,clif->pGetCharNameRequest,2);
#endif

// 2017-11-30bRagexe_zero
#if PACKETVER == 20171130
	packet(0x0361,clif->pPartyBookingRegisterReq,2,4);
	packet(0x0864,clif->pGetCharNameRequest,2);
	packet(0x086f,clif->pSearchStoreInfoListItemClick,2,6,10);
	packet(0x0871,clif->pSearchStoreInfoNextPage,0);
	packet(0x0872,clif->pReqClickBuyingStore,2);
	packet(0x0875,clif->pTakeItem,2);
	packet(0x0878,clif->pReqTradeBuyingStore,2,4,8,12);
	packet(0x0881,clif->pUseSkillToPos,2,4,6,8);
	packet(0x0884,clif->pDropItem,2,4);
	packet(0x0886,clif->pReqCloseBuyingStore,0);
	packet(0x0887,clif->pStoragePassword,0);
	packet(0x088b,clif->pMoveToKafra,2,4);
	packet(0x0894,clif->pWalkToXY,2);
	packet(0x0899,clif->pDull/*,XXX*/);
	packet(0x08a0,clif->pChangeDir,2,4);
	packet(0x08a7,clif->pItemListWindowSelected,2,4,8);
	packet(0x0925,clif->pReqOpenBuyingStore,2,4,8,9,89);
	packet(0x0928,clif->pDull/*,XXX*/);
	packet(0x0930,clif->pWantToConnection,2,6,10,14,18);
	packet(0x0931,clif->pFriendsListAdd,2);
	packet(0x0935,clif->pMoveFromKafra,2,4);
	packet(0x093a,clif->pActionRequest,2,6);
	packet(0x0947,clif->pSearchStoreInfo,2,4,5,9,13,14,15);
	packet(0x094c,clif->pHomMenu,2,4);
	packet(0x094f,clif->pUseSkillToPosMoreInfo,2,4,6,8,10);
	packet(0x095b,clif->pTickSend,2);
	packet(0x095f,clif->pPartyInvite2,2);
	packet(0x0960,clif->pSolveCharName,2);
	packet(0x0965,clif->pUseSkillToId,2,4,6);
#endif

// 2017-12-04bRagexe_zero
#if PACKETVER == 20171204
	packet(0x0281,clif->pTakeItem,2);
	packet(0x035f,clif->pTickSend,2);
	packet(0x0360,clif->pReqClickBuyingStore,2);
	packet(0x0368,clif->pSolveCharName,2);
	packet(0x0369,clif->pActionRequest,2,6);
	packet(0x0437,clif->pWalkToXY,2);
	packet(0x0438,clif->pUseSkillToPos,2,4,6,8);
	packet(0x0811,clif->pReqTradeBuyingStore,2,4,8,12);
	packet(0x0815,clif->pReqOpenBuyingStore,2,4,8,9,89);
	packet(0x0817,clif->pReqCloseBuyingStore,0);
	packet(0x0819,clif->pSearchStoreInfo,2,4,5,9,13,14,15);
	packet(0x0835,clif->pSearchStoreInfoNextPage,0);
	packet(0x0838,clif->pSearchStoreInfoListItemClick,2,6,10);
	packet(0x083c,clif->pUseSkillToId,2,4,6);
	packet(0x085b,clif->pDull/*,XXX*/);
	packet(0x086f,clif->pWantToConnection,2,6,10,14,18);
	packet(0x087d,clif->pItemListWindowSelected,2,4,8);
	packet(0x0885,clif->pUseSkillToPosMoreInfo,2,4,6,8,10);
	packet(0x0887,clif->pChangeDir,2,4);
	packet(0x0892,clif->pDull/*,XXX*/);
	packet(0x0896,clif->pStoragePassword,0);
	packet(0x08aa,clif->pPartyInvite2,2);
	packet(0x0917,clif->pMoveFromKafra,2,4);
	packet(0x091b,clif->pFriendsListAdd,2);
	packet(0x0921,clif->pPartyBookingRegisterReq,2,4);
	packet(0x0924,clif->pHomMenu,2,4);
	packet(0x0937,clif->pMoveToKafra,2,4);
	packet(0x0960,clif->pDropItem,2,4);
	packet(0x096a,clif->pGetCharNameRequest,2);
#endif

// 2017-12-06aRagexe_zero, 2017-12-06bRagexe_zero, 2017-12-06cRagexe_zero, 2017-12-06dRagexe_zero, 2017-12-08aRagexe_zero, 2017-12-08cRagexe_zero, 2017-12-08dRagexe_zero, 2017-12-09bRagexe_zero, 2017-12-09cRagexe_zero, 2017-12-10aRagexe_zero, 2017-12-11bRagexe_zero, 2017-12-12aRagexe_zero, 2017-12-13aRagexe_zero, 2017-12-13bRagexe_zero, 2017-12-13cRagexe_zero
#if PACKETVER == 20171206 || \
    PACKETVER == 20171208 || \
    PACKETVER == 20171209 || \
    PACKETVER == 20171210 || \
    PACKETVER == 20171211 || \
    PACKETVER == 20171212 || \
    PACKETVER == 20171213
	packet(0x0281,clif->pUseSkillToId,2,4,6);
	packet(0x0366,clif->pDropItem,2,4);
	packet(0x0436,clif->pReqClickBuyingStore,2);
	packet(0x0835,clif->pTakeItem,2);
	packet(0x083c,clif->pDull/*,XXX*/);
	packet(0x0860,clif->pDull/*,XXX*/);
	packet(0x0862,clif->pChangeDir,2,4);
	packet(0x0864,clif->pWalkToXY,2);
	packet(0x0870,clif->pMoveToKafra,2,4);
	packet(0x0878,clif->pUseSkillToPos,2,4,6,8);
	packet(0x087a,clif->pPartyBookingRegisterReq,2,4);
	packet(0x087b,clif->pReqTradeBuyingStore,2,4,8,12);
	packet(0x0885,clif->pSolveCharName,2);
	packet(0x088d,clif->pPartyInvite2,2);
	packet(0x0893,clif->pFriendsListAdd,2);
	packet(0x0897,clif->pHomMenu,2,4);
	packet(0x089e,clif->pSearchStoreInfoListItemClick,2,6,10);
	packet(0x08a4,clif->pReqOpenBuyingStore,2,4,8,9,89);
	packet(0x08ac,clif->pActionRequest,2,6);
	packet(0x0920,clif->pWantToConnection,2,6,10,14,18);
	packet(0x0934,clif->pReqCloseBuyingStore,0);
	packet(0x0936,clif->pMoveFromKafra,2,4);
	packet(0x093a,clif->pItemListWindowSelected,2,4,8);
	packet(0x0940,clif->pUseSkillToPosMoreInfo,2,4,6,8,10);
	packet(0x0941,clif->pGetCharNameRequest,2);
	packet(0x0959,clif->pStoragePassword,0);
	packet(0x095b,clif->pSearchStoreInfoNextPage,0);
	packet(0x095c,clif->pSearchStoreInfo,2,4,5,9,13,14,15);
	packet(0x095f,clif->pTickSend,2);
#endif

// 2017-12-14cRagexe_zero
#if PACKETVER == 20171214
	packet(0x023b,clif->pSearchStoreInfoNextPage,0);
	packet(0x02c4,clif->pDropItem,2,4);
	packet(0x0438,clif->pGetCharNameRequest,2);
	packet(0x085b,clif->pStoragePassword,0);
	packet(0x085e,clif->pPartyBookingRegisterReq,2,4);
	packet(0x0862,clif->pSolveCharName,2);
	packet(0x0864,clif->pDull/*,XXX*/);
	packet(0x086a,clif->pWalkToXY,2);
	packet(0x0871,clif->pWantToConnection,2,6,10,14,18);
	packet(0x0873,clif->pItemListWindowSelected,2,4,8);
	packet(0x0886,clif->pReqClickBuyingStore,2);
	packet(0x088b,clif->pDull/*,XXX*/);
	packet(0x088c,clif->pMoveToKafra,2,4);
	packet(0x0892,clif->pUseSkillToId,2,4,6);
	packet(0x0894,clif->pTakeItem,2);
	packet(0x0897,clif->pReqTradeBuyingStore,2,4,8,12);
	packet(0x08a3,clif->pFriendsListAdd,2);
	packet(0x08a5,clif->pUseSkillToPosMoreInfo,2,4,6,8,10);
	packet(0x08ac,clif->pReqCloseBuyingStore,0);
	packet(0x0933,clif->pActionRequest,2,6);
	packet(0x094a,clif->pChangeDir,2,4);
	packet(0x094d,clif->pHomMenu,2,4);
	packet(0x094f,clif->pSearchStoreInfo,2,4,5,9,13,14,15);
	packet(0x0951,clif->pPartyInvite2,2);
	packet(0x095a,clif->pMoveFromKafra,2,4);
	packet(0x095b,clif->pSearchStoreInfoListItemClick,2,6,10);
	packet(0x0960,clif->pTickSend,2);
	packet(0x0969,clif->pReqOpenBuyingStore,2,4,8,9,89);
	packet(0x096a,clif->pUseSkillToPos,2,4,6,8);
#endif

// 2017-12-20aRagexe_zero, 2017-12-21aRagexe_zero, 2017-12-21bRagexe_zero
#if PACKETVER == 20171220 || \
    PACKETVER == 20171221
	packet(0x022d,clif->pSearchStoreInfoNextPage,0);
	packet(0x0281,clif->pUseSkillToPos,2,4,6,8);
	packet(0x0438,clif->pGetCharNameRequest,2);
	packet(0x07ec,clif->pReqClickBuyingStore,2);
	packet(0x0819,clif->pUseSkillToPosMoreInfo,2,4,6,8,10);
	packet(0x0835,clif->pSearchStoreInfo,2,4,5,9,13,14,15);
	packet(0x0838,clif->pTickSend,2);
	packet(0x085f,clif->pReqTradeBuyingStore,2,4,8,12);
	packet(0x0867,clif->pSolveCharName,2);
	packet(0x086c,clif->pTakeItem,2);
	packet(0x0872,clif->pMoveFromKafra,2,4);
	packet(0x087a,clif->pSearchStoreInfoListItemClick,2,6,10);
	packet(0x087e,clif->pDull/*,XXX*/);
	packet(0x0899,clif->pWalkToXY,2);
	packet(0x089b,clif->pDull/*,XXX*/);
	packet(0x089c,clif->pReqCloseBuyingStore,0);
	packet(0x08a3,clif->pItemListWindowSelected,2,4,8);
	packet(0x08a5,clif->pDropItem,2,4);
	packet(0x08ad,clif->pWantToConnection,2,6,10,14,18);
	packet(0x091f,clif->pReqOpenBuyingStore,2,4,8,9,89);
	packet(0x0921,clif->pHomMenu,2,4);
	packet(0x092d,clif->pPartyBookingRegisterReq,2,4);
	packet(0x092e,clif->pFriendsListAdd,2);
	packet(0x0932,clif->pPartyInvite2,2);
	packet(0x0934,clif->pMoveToKafra,2,4);
	packet(0x0937,clif->pActionRequest,2,6);
	packet(0x094d,clif->pUseSkillToId,2,4,6);
	packet(0x095b,clif->pStoragePassword,0);
	packet(0x096a,clif->pChangeDir,2,4);
#endif

// 2017-12-27bRagexe_zero, 2017-12-29aRagexe_zero
#if PACKETVER == 20171227 || \
    PACKETVER == 20171229
	packet(0x02c4,clif->pSearchStoreInfoNextPage,0);
	packet(0x0860,clif->pChangeDir,2,4);
	packet(0x086c,clif->pActionRequest,2,6);
	packet(0x0871,clif->pSolveCharName,2);
	packet(0x0872,clif->pUseSkillToPosMoreInfo,2,4,6,8,10);
	packet(0x0874,clif->pWantToConnection,2,6,10,14,18);
	packet(0x0876,clif->pUseSkillToPos,2,4,6,8);
	packet(0x0877,clif->pDull/*,XXX*/);
	packet(0x0878,clif->pTakeItem,2);
	packet(0x087b,clif->pMoveToKafra,2,4);
	packet(0x0885,clif->pMoveFromKafra,2,4);
	packet(0x0889,clif->pSearchStoreInfo,2,4,5,9,13,14,15);
	packet(0x088b,clif->pReqCloseBuyingStore,0);
	packet(0x0894,clif->pPartyBookingRegisterReq,2,4);
	packet(0x089f,clif->pReqClickBuyingStore,2);
	packet(0x091c,clif->pDropItem,2,4);
	packet(0x0920,clif->pReqTradeBuyingStore,2,4,8,12);
	packet(0x0925,clif->pDull/*,XXX*/);
	packet(0x092d,clif->pSearchStoreInfoListItemClick,2,6,10);
	packet(0x0930,clif->pStoragePassword,0);
	packet(0x0939,clif->pTickSend,2);
	packet(0x093e,clif->pGetCharNameRequest,2);
	packet(0x0941,clif->pFriendsListAdd,2);
	packet(0x0945,clif->pPartyInvite2,2);
	packet(0x0946,clif->pWalkToXY,2);
	packet(0x094b,clif->pReqOpenBuyingStore,2,4,8,9,89);
	packet(0x095e,clif->pHomMenu,2,4);
	packet(0x0967,clif->pUseSkillToId,2,4,6);
	packet(0x0968,clif->pItemListWindowSelected,2,4,8);
#endif

// 2018-01-03aRagexe_zero
#if PACKETVER == 20180103
	packet(0x035f,clif->pChangeDir,2,4);
	packet(0x0360,clif->pPartyBookingRegisterReq,2,4);
	packet(0x0366,clif->pReqTradeBuyingStore,2,4,8,12);
	packet(0x07e4,clif->pWalkToXY,2);
	packet(0x083c,clif->pUseSkillToPos,2,4,6,8);
	packet(0x0860,clif->pHomMenu,2,4);
	packet(0x0866,clif->pItemListWindowSelected,2,4,8);
	packet(0x086d,clif->pFriendsListAdd,2);
	packet(0x0871,clif->pTickSend,2);
	packet(0x0872,clif->pReqOpenBuyingStore,2,4,8,9,89);
	packet(0x0874,clif->pSearchStoreInfoNextPage,0);
	packet(0x087b,clif->pDull/*,XXX*/);
	packet(0x0885,clif->pReqCloseBuyingStore,0);
	packet(0x0888,clif->pActionRequest,2,6);
	packet(0x0890,clif->pDropItem,2,4);
	packet(0x0896,clif->pUseSkillToId,2,4,6);
	packet(0x089d,clif->pMoveToKafra,2,4);
	packet(0x08a6,clif->pGetCharNameRequest,2);
	packet(0x091e,clif->pTakeItem,2);
	packet(0x0924,clif->pDull/*,XXX*/);
	packet(0x0938,clif->pUseSkillToPosMoreInfo,2,4,6,8,10);
	packet(0x093b,clif->pPartyInvite2,2);
	packet(0x0956,clif->pSearchStoreInfo,2,4,5,9,13,14,15);
	packet(0x0958,clif->pWantToConnection,2,6,10,14,18);
	packet(0x095b,clif->pStoragePassword,0);
	packet(0x095d,clif->pSolveCharName,2);
	packet(0x0964,clif->pReqClickBuyingStore,2);
	packet(0x0966,clif->pMoveFromKafra,2,4);
	packet(0x096a,clif->pSearchStoreInfoListItemClick,2,6,10);
#endif

// 2018-01-17aRagexe_zero
#if PACKETVER == 20180117
	packet(0x0361,clif->pPartyInvite2,2);
	packet(0x0364,clif->pSolveCharName,2);
	packet(0x0438,clif->pDull/*,XXX*/);
	packet(0x07e4,clif->pStoragePassword,0);
	packet(0x083c,clif->pDropItem,2,4);
	packet(0x0866,clif->pReqOpenBuyingStore,2,4,8,9,89);
	packet(0x086e,clif->pUseSkillToPos,2,4,6,8);
	packet(0x086f,clif->pReqClickBuyingStore,2);
	packet(0x087d,clif->pWantToConnection,2,6,10,14,18);
	packet(0x0881,clif->pUseSkillToId,2,4,6);
	packet(0x0884,clif->pSearchStoreInfoNextPage,0);
	packet(0x0886,clif->pTakeItem,2);
	packet(0x0890,clif->pMoveToKafra,2,4);
	packet(0x0891,clif->pGetCharNameRequest,2);
	packet(0x0893,clif->pActionRequest,2,6);
	packet(0x0899,clif->pSearchStoreInfo,2,4,5,9,13,14,15);
	packet(0x089d,clif->pItemListWindowSelected,2,4,8);
	packet(0x089e,clif->pChangeDir,2,4);
	packet(0x0919,clif->pTickSend,2);
	packet(0x091c,clif->pMoveFromKafra,2,4);
	packet(0x091f,clif->pUseSkillToPosMoreInfo,2,4,6,8,10);
	packet(0x0921,clif->pWalkToXY,2);
	packet(0x0928,clif->pReqCloseBuyingStore,0);
	packet(0x0929,clif->pPartyBookingRegisterReq,2,4);
	packet(0x092d,clif->pDull/*,XXX*/);
	packet(0x0933,clif->pSearchStoreInfoListItemClick,2,6,10);
	packet(0x0946,clif->pFriendsListAdd,2);
	packet(0x095e,clif->pReqTradeBuyingStore,2,4,8,12);
	packet(0x0963,clif->pHomMenu,2,4);
#endif

// 2018-01-31dRagexe_zero
#if PACKETVER == 20180131
	packet(0x0202,clif->pChangeDir,2,4);
	packet(0x022d,clif->pWantToConnection,2,6,10,14,18);
	packet(0x023b,clif->pFriendsListAdd,2);
	packet(0x0281,clif->pItemListWindowSelected,2,4,8);
	packet(0x035f,clif->pTickSend,2);
	packet(0x0360,clif->pReqClickBuyingStore,2);
	packet(0x0361,clif->pHomMenu,2,4);
	packet(0x0362,clif->pDropItem,2,4);
	packet(0x0363,clif->pDull/*,XXX*/);
	packet(0x0364,clif->pMoveFromKafra,2,4);
	packet(0x0365,clif->pPartyBookingRegisterReq,2,4);
	packet(0x0367,clif->pStoragePassword,0);
	packet(0x0368,clif->pSolveCharName,2);
	packet(0x0369,clif->pActionRequest,2,6);
	packet(0x0436,clif->pDull/*,XXX*/);
	packet(0x0437,clif->pWalkToXY,2);
	packet(0x0438,clif->pUseSkillToPos,2,4,6,8);
	packet(0x07e4,clif->pTakeItem,2);
	packet(0x07ec,clif->pMoveToKafra,2,4);
	packet(0x0802,clif->pPartyInvite2,2);
	packet(0x0811,clif->pReqTradeBuyingStore,2,4,8,12);
	packet(0x0815,clif->pReqOpenBuyingStore,2,4,8,9,89);
	packet(0x0817,clif->pReqCloseBuyingStore,0);
	packet(0x0819,clif->pSearchStoreInfo,2,4,5,9,13,14,15);
	packet(0x0835,clif->pSearchStoreInfoNextPage,0);
	packet(0x0838,clif->pSearchStoreInfoListItemClick,2,6,10);
	packet(0x083c,clif->pUseSkillToId,2,4,6);
	packet(0x0940,clif->pUseSkillToPosMoreInfo,2,4,6,8,10);
	packet(0x096a,clif->pGetCharNameRequest,2);
#endif

// 2018-02-07bRagexe_zero
#if PACKETVER == 20180207
	packet(0x0202,clif->pChangeDir,2,4);
	packet(0x022d,clif->pWantToConnection,2,6,10,14,18);
	packet(0x023b,clif->pFriendsListAdd,2);
	packet(0x0281,clif->pItemListWindowSelected,2,4,8);
	packet(0x035f,clif->pTickSend,2);
	packet(0x0360,clif->pReqClickBuyingStore,2);
	packet(0x0361,clif->pHomMenu,2,4);
	packet(0x0362,clif->pDropItem,2,4);
	packet(0x0363,clif->pDull/*,XXX*/);
	packet(0x0364,clif->pMoveFromKafra,2,4);
	packet(0x0365,clif->pPartyBookingRegisterReq,2,4);
	packet(0x0366,clif->pUseSkillToPosMoreInfo,2,4,6,8,10);
	packet(0x0368,clif->pSolveCharName,2);
	packet(0x0369,clif->pActionRequest,2,6);
	packet(0x0436,clif->pDull/*,XXX*/);
	packet(0x0437,clif->pWalkToXY,2);
	packet(0x0438,clif->pUseSkillToPos,2,4,6,8);
	packet(0x07e4,clif->pTakeItem,2);
	packet(0x07ec,clif->pMoveToKafra,2,4);
	packet(0x0802,clif->pPartyInvite2,2);
	packet(0x0811,clif->pReqTradeBuyingStore,2,4,8,12);
	packet(0x0815,clif->pReqOpenBuyingStore,2,4,8,9,89);
	packet(0x0817,clif->pReqCloseBuyingStore,0);
	packet(0x0819,clif->pSearchStoreInfo,2,4,5,9,13,14,15);
	packet(0x0835,clif->pSearchStoreInfoNextPage,0);
	packet(0x0838,clif->pSearchStoreInfoListItemClick,2,6,10);
	packet(0x083c,clif->pUseSkillToId,2,4,6);
	packet(0x0967,clif->pStoragePassword,0);
	packet(0x096a,clif->pGetCharNameRequest,2);
#endif

// 2018-02-13aRagexe_zero
#if PACKETVER == 20180213
	packet(0x022d,clif->pChangeDir,2,4);
	packet(0x02c4,clif->pMoveToKafra,2,4);
	packet(0x035f,clif->pDropItem,2,4);
	packet(0x0361,clif->pUseSkillToPosMoreInfo,2,4,6,8,10);
	packet(0x0802,clif->pTickSend,2);
	packet(0x0815,clif->pUseSkillToId,2,4,6);
	packet(0x0838,clif->pSearchStoreInfoNextPage,0);
	packet(0x085a,clif->pSearchStoreInfo,2,4,5,9,13,14,15);
	packet(0x085d,clif->pHomMenu,2,4);
	packet(0x0868,clif->pPartyBookingRegisterReq,2,4);
	packet(0x087b,clif->pGetCharNameRequest,2);
	packet(0x0882,clif->pSearchStoreInfoListItemClick,2,6,10);
	packet(0x0887,clif->pItemListWindowSelected,2,4,8);
	packet(0x0888,clif->pSolveCharName,2);
	packet(0x088a,clif->pDull/*,XXX*/);
	packet(0x088e,clif->pReqClickBuyingStore,2);
	packet(0x0899,clif->pFriendsListAdd,2);
	packet(0x0917,clif->pActionRequest,2,6);
	packet(0x091d,clif->pWalkToXY,2);
	packet(0x0922,clif->pReqOpenBuyingStore,2,4,8,9,89);
	packet(0x0930,clif->pDull/*,XXX*/);
	packet(0x0941,clif->pWantToConnection,2,6,10,14,18);
	packet(0x0942,clif->pMoveFromKafra,2,4);
	packet(0x0947,clif->pTakeItem,2);
	packet(0x094d,clif->pUseSkillToPos,2,4,6,8);
	packet(0x0958,clif->pPartyInvite2,2);
	packet(0x095b,clif->pReqCloseBuyingStore,0);
	packet(0x095c,clif->pReqTradeBuyingStore,2,4,8,12);
	packet(0x0967,clif->pStoragePassword,0);
#endif

// 2018-02-21aRagexe_zero
#if PACKETVER == 20180221
	packet(0x02c4,clif->pTickSend,2);
	packet(0x0362,clif->pGetCharNameRequest,2);
	packet(0x0364,clif->pChangeDir,2,4);
	packet(0x0438,clif->pItemListWindowSelected,2,4,8);
	packet(0x0817,clif->pSearchStoreInfo,2,4,5,9,13,14,15);
	packet(0x085b,clif->pUseSkillToPos,2,4,6,8);
	packet(0x086a,clif->pDull/*,XXX*/);
	packet(0x0878,clif->pReqCloseBuyingStore,0);
	packet(0x0880,clif->pWantToConnection,2,6,10,14,18);
	packet(0x0884,clif->pSearchStoreInfoNextPage,0);
	packet(0x088d,clif->pSolveCharName,2);
	packet(0x0892,clif->pDropItem,2,4);
	packet(0x0895,clif->pReqClickBuyingStore,2);
	packet(0x08a1,clif->pWalkToXY,2);
	packet(0x08a3,clif->pUseSkillToId,2,4,6);
	packet(0x091b,clif->pUseSkillToPosMoreInfo,2,4,6,8,10);
	packet(0x0921,clif->pReqOpenBuyingStore,2,4,8,9,89);
	packet(0x0923,clif->pHomMenu,2,4);
	packet(0x092d,clif->pFriendsListAdd,2);
	packet(0x0932,clif->pReqTradeBuyingStore,2,4,8,12);
	packet(0x093b,clif->pSearchStoreInfoListItemClick,2,6,10);
	packet(0x093d,clif->pPartyInvite2,2);
	packet(0x093e,clif->pMoveFromKafra,2,4);
	packet(0x0942,clif->pStoragePassword,0);
	packet(0x0951,clif->pPartyBookingRegisterReq,2,4);
	packet(0x0952,clif->pDull/*,XXX*/);
	packet(0x0958,clif->pActionRequest,2,6);
	packet(0x0959,clif->pMoveToKafra,2,4);
	packet(0x095d,clif->pTakeItem,2);
#endif

// 2018-02-28bRagexe_zero, 2018-03-07aRagexe_zero, 2018-03-09aRagexe_zero
#if PACKETVER == 20180228 || \
    PACKETVER == 20180307 || \
    PACKETVER == 20180309
	packet(0x0202,clif->pChangeDir,2,4);
	packet(0x022d,clif->pWantToConnection,2,6,10,14,18);
	packet(0x023b,clif->pFriendsListAdd,2);
	packet(0x0281,clif->pItemListWindowSelected,2,4,8);
	packet(0x035f,clif->pTickSend,2);
	packet(0x0360,clif->pReqClickBuyingStore,2);
	packet(0x0361,clif->pHomMenu,2,4);
	packet(0x0362,clif->pDropItem,2,4);
	packet(0x0363,clif->pDull/*,XXX*/);
	packet(0x0364,clif->pMoveFromKafra,2,4);
	packet(0x0365,clif->pPartyBookingRegisterReq,2,4);
	packet(0x0366,clif->pUseSkillToPosMoreInfo,2,4,6,8,10);
	packet(0x0368,clif->pSolveCharName,2);
	packet(0x0369,clif->pActionRequest,2,6);
	packet(0x0436,clif->pDull/*,XXX*/);
	packet(0x0437,clif->pWalkToXY,2);
	packet(0x0438,clif->pUseSkillToPos,2,4,6,8);
	packet(0x07e4,clif->pTakeItem,2);
	packet(0x07ec,clif->pMoveToKafra,2,4);
	packet(0x0802,clif->pPartyInvite2,2);
	packet(0x0811,clif->pReqTradeBuyingStore,2,4,8,12);
	packet(0x0815,clif->pReqOpenBuyingStore,2,4,8,9,89);
	packet(0x0817,clif->pReqCloseBuyingStore,0);
	packet(0x0819,clif->pSearchStoreInfo,2,4,5,9,13,14,15);
	packet(0x0835,clif->pSearchStoreInfoNextPage,0);
	packet(0x0838,clif->pSearchStoreInfoListItemClick,2,6,10);
	packet(0x083c,clif->pUseSkillToId,2,4,6);
	packet(0x0930,clif->pStoragePassword,0);
	packet(0x096a,clif->pGetCharNameRequest,2);
#endif

// 2018-03-14nRagexe_zero
#if PACKETVER == 20180314
	packet(0x023b,clif->pPartyInvite2,2);
	packet(0x0438,clif->pSearchStoreInfoNextPage,0);
	packet(0x07ec,clif->pWantToConnection,2,6,10,14,18);
	packet(0x0817,clif->pReqCloseBuyingStore,0);
	packet(0x083c,clif->pChangeDir,2,4);
	packet(0x085d,clif->pFriendsListAdd,2);
	packet(0x085f,clif->pReqOpenBuyingStore,2,4,8,9,89);
	packet(0x0866,clif->pHomMenu,2,4);
	packet(0x0878,clif->pDull/*,XXX*/);
	packet(0x088d,clif->pStoragePassword,0);
	packet(0x0891,clif->pMoveFromKafra,2,4);
	packet(0x0897,clif->pTakeItem,2);
	packet(0x0899,clif->pMoveToKafra,2,4);
	packet(0x089e,clif->pItemListWindowSelected,2,4,8);
	packet(0x08a1,clif->pDull/*,XXX*/);
	packet(0x0917,clif->pSearchStoreInfo,2,4,5,9,13,14,15);
	packet(0x0918,clif->pActionRequest,2,6);
	packet(0x091f,clif->pUseSkillToPos,2,4,6,8);
	packet(0x0920,clif->pTickSend,2);
	packet(0x0923,clif->pSearchStoreInfoListItemClick,2,6,10);
	packet(0x0930,clif->pDropItem,2,4);
	packet(0x0931,clif->pReqClickBuyingStore,2);
	packet(0x093f,clif->pSolveCharName,2);
	packet(0x0946,clif->pUseSkillToPosMoreInfo,2,4,6,8,10);
	packet(0x094a,clif->pUseSkillToId,2,4,6);
	packet(0x094e,clif->pWalkToXY,2);
	packet(0x0954,clif->pPartyBookingRegisterReq,2,4);
	packet(0x0956,clif->pGetCharNameRequest,2);
	packet(0x0958,clif->pReqTradeBuyingStore,2,4,8,12);
#endif

// 2018-05-11aRagexe_zero, 2018-05-11bRagexe_zero
#if PACKETVER == 20180511
	packet(0x0817,clif->pSolveCharName,2);
	packet(0x085f,clif->pDropItem,2,4);
	packet(0x0863,clif->pReqClickBuyingStore,2);
	packet(0x086c,clif->pActionRequest,2,6);
	packet(0x0877,clif->pMoveFromKafra,2,4);
	packet(0x087e,clif->pSearchStoreInfo,2,4,5,9,13,14,15);
	packet(0x0880,clif->pGetCharNameRequest,2);
	packet(0x0889,clif->pMoveToKafra,2,4);
	packet(0x0893,clif->pPartyBookingRegisterReq,2,4);
	packet(0x0896,clif->pWantToConnection,2,6,10,14,18);
	packet(0x0899,clif->pSearchStoreInfoListItemClick,2,6,10);
	packet(0x08a2,clif->pTakeItem,2);
	packet(0x08a4,clif->pReqCloseBuyingStore,0);
	packet(0x08a5,clif->pTickSend,2);
	packet(0x0919,clif->pWalkToXY,2);
	packet(0x091a,clif->pItemListWindowSelected,2,4,8);
	packet(0x091d,clif->pReqOpenBuyingStore,2,4,8,9,89);
	packet(0x0920,clif->pDull/*,XXX*/);
	packet(0x092c,clif->pUseSkillToId,2,4,6);
	packet(0x092d,clif->pPartyInvite2,2);
	packet(0x092e,clif->pReqTradeBuyingStore,2,4,8,12);
	packet(0x0941,clif->pSearchStoreInfoNextPage,0);
	packet(0x0942,clif->pChangeDir,2,4);
	packet(0x094a,clif->pUseSkillToPosMoreInfo,2,4,6,8,10);
	packet(0x0955,clif->pFriendsListAdd,2);
	packet(0x0956,clif->pDull/*,XXX*/);
	packet(0x095c,clif->pUseSkillToPos,2,4,6,8);
	packet(0x0961,clif->pHomMenu,2,4);
	packet(0x0968,clif->pStoragePassword,0);
#endif

// 2021-06-30_Ragexe_1624599911_zero, 2021-06-30_Ragexe_1624607404_zero, 2021-06-30_Ragexe_1624854348_zero, 2021-07-21_Ragexe_1625719811_zero, 2021-08-04_Ragexe_1627876396_zero, 2021-08-18_Ragexe_1628740146_zero, 2021-09-29_Ragexe_1632464403_zero, 2021-09-29_Ragexe_1632814839_zero, 2021-09-29_Ragexe_1632894566_zero, 2021-10-06_Ragexe_1633056582_zero, 2021-10-20_Ragexe_1634624271_zero, 2021-11-03_Ragexe_1635730894_zero, 2021-11-03_Ragexe_1635842843_zero, 2021-11-17_Ragexe_1636622068_zero, 2021-12-01_Ragexe_1637907717_zero, 2021-12-01_Ragexe_1637915599_zero, 2021-12-01_Ragexe_1638171799_zero, 2021-12-01_Ragexe_1638253451_zero, 2021-12-15_Ragexe_1639118645_zero, 2021-12-29_Ragexe_1640246076_zero, 2022-01-19_Ragexe_1642129078_zero, 2022-02-03_Ragexe_1643105250_zero, 2022-03-16_Ragexe_1646956311_zero
#if PACKETVER == 20210630 || \
    PACKETVER == 20210721 || \
    PACKETVER == 20210804 || \
    PACKETVER == 20210818 || \
    PACKETVER == 20210929 || \
    PACKETVER == 20211006 || \
    PACKETVER == 20211020 || \
    PACKETVER == 20211103 || \
    PACKETVER == 20211117 || \
    PACKETVER == 20211201 || \
    PACKETVER == 20211215 || \
    PACKETVER == 20211229 || \
    PACKETVER == 20220119 || \
    PACKETVER == 20220203 || \
    PACKETVER >= 20220316
	packet(0x0202,clif->pFriendsListAdd,2);
	packet(0x022d,clif->pHomMenu,2,4);
	packet(0x023b,clif->pStoragePassword,0);
	packet(0x0281,clif->pDull/*,XXX*/);
	packet(0x02c4,clif->pPartyInvite2,2);
	packet(0x035f,clif->pWalkToXY,2);
	packet(0x0360,clif->pTickSend,2);
	packet(0x0361,clif->pChangeDir,2,4);
	packet(0x0362,clif->pTakeItem,2);
	packet(0x0363,clif->pDropItem,2,4);
	packet(0x0364,clif->pMoveToKafra,2,4);
	packet(0x0365,clif->pMoveFromKafra,2,4);
	packet(0x0366,clif->pUseSkillToPos,2,4,6,8);
	packet(0x0367,clif->pUseSkillToPosMoreInfo,2,4,6,8,10);
	packet(0x0368,clif->pGetCharNameRequest,2);
	packet(0x0369,clif->pSolveCharName,2);
	packet(0x0436,clif->pWantToConnection,2,6,10,18,22);
	packet(0x0437,clif->pActionRequest,2,6);
	packet(0x0438,clif->pUseSkillToId,2,4,6);
	packet(0x07e4,clif->pItemListWindowSelected,2,4,8);
	packet(0x07ec,clif->pDull/*,XXX*/);
	packet(0x0802,clif->pPartyBookingRegisterReq,2,4);
	packet(0x0811,clif->pReqOpenBuyingStore,2,4,8,9,89);
	packet(0x0815,clif->pReqCloseBuyingStore,0);
	packet(0x0817,clif->pReqClickBuyingStore,2);
	packet(0x0819,clif->pReqTradeBuyingStore,2,4,8,12);
	packet(0x0835,clif->pSearchStoreInfo,2,4,5,9,13,14,15);
	packet(0x0838,clif->pSearchStoreInfoNextPage,0);
	packet(0x083c,clif->pSearchStoreInfoListItemClick,2,6,10);
#endif


#endif /* MAP_PACKETS_SHUFFLE_ZERO_H */
