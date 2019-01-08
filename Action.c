Action()
{

	//web_set_sockets_option("SSL_VERSION", "TLS1.2");
	
	web_set_max_retries ("60");
	
	/*web_set_user("inroot\\hpapmadm", 
		lr_decrypt("59e1f12c610547b1c131349ddaedaf588c3055fad9815c3e20c82edd7b06da"), 
		":0");*/
	
	
my_host = lr_get_host_name( ); 

if( stricmp (my_host, "RUNNINGHOST") == 0){

web_set_proxy("10.94.147.11:8080"); 

web_set_user("inroot\\hpapmadm","Wlxfp4#p","vsearch.vodafone.in:443");

}

web_set_user("inroot\\hpapmadm","Wlxfp4#p","vsearch.vodafone.in:443");
	
	lr_start_transaction("Login_Page");


	web_url("LandingPage.aspx", 
		"URL=https://vsearch.vodafone.in/sites/Vgyan/_layouts/15/VodafoneKMS/Pages/LandingPage.aspx", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_start(NULL);

	web_url("init.js", 
		"URL=https://vsearch.vodafone.in/_layouts/15/init.js?rev=Xpo7ARBt8xBROO1h5n3s6g%3D%3D", 
		"Resource=1", 
		"Referer=https://vsearch.vodafone.in/sites/Vgyan/_layouts/15/VodafonekMS/Pages/ErrorPage/LoginError.aspx?error=Sorry!!%20Your%20session%20has%20expired.%20To%20continue%20browsing%20in%20KMS%20please%20click%20on%20HOME.", 
		"Snapshot=t2.inf", 
		LAST);

	web_url("KMSStylesheet.css", 
		"URL=https://vsearch.vodafone.in/_layouts/15/1033/STYLES/KMSStylesheet.css", 
		"Resource=1", 
		"Referer=https://vsearch.vodafone.in/sites/Vgyan/_layouts/15/VodafonekMS/Pages/ErrorPage/LoginError.aspx?error=Sorry!!%20Your%20session%20has%20expired.%20To%20continue%20browsing%20in%20KMS%20please%20click%20on%20HOME.", 
		"Snapshot=t3.inf", 
		LAST);

	web_url("InnerPage.css", 
		"URL=https://vsearch.vodafone.in/_layouts/15/1033/STYLES/InnerPage.css", 
		"Resource=1", 
		"Referer=https://vsearch.vodafone.in/sites/Vgyan/_layouts/15/VodafonekMS/Pages/ErrorPage/LoginError.aspx?error=Sorry!!%20Your%20session%20has%20expired.%20To%20continue%20browsing%20in%20KMS%20please%20click%20on%20HOME.", 
		"Snapshot=t4.inf", 
		LAST);

	web_url("initstrings.js", 
		"URL=https://vsearch.vodafone.in/_layouts/15/1033/initstrings.js?rev=S11vfGURQYVuACMEY0tLTg%3D%3D", 
		"Resource=1", 
		"Referer=https://vsearch.vodafone.in/sites/Vgyan/_layouts/15/VodafonekMS/Pages/ErrorPage/LoginError.aspx?error=Sorry!!%20Your%20session%20has%20expired.%20To%20continue%20browsing%20in%20KMS%20please%20click%20on%20HOME.", 
		"Snapshot=t5.inf", 
		LAST);

	web_url("Controls.css", 
		"URL=https://vsearch.vodafone.in/_layouts/15/1033/STYLES/Controls.css", 
		"Resource=1", 
		"Referer=https://vsearch.vodafone.in/sites/Vgyan/_layouts/15/VodafonekMS/Pages/ErrorPage/LoginError.aspx?error=Sorry!!%20Your%20session%20has%20expired.%20To%20continue%20browsing%20in%20KMS%20please%20click%20on%20HOME.", 
		"Snapshot=t6.inf", 
		LAST);

	web_url("ScriptResource.axd", 
		"URL=https://vsearch.vodafone.in/ScriptResource.axd?d=tj6knH3xBp4n0s5xymiNzN945C7EAby9qScgdcxg6FUsepaN_lMSaukO_b0F8E7IDQYlwyfpT0pGTtKiqwRrm1Clko8Oj-rRnd5dLl9a3lHuNLf687JKXnV6TYziXy8fGXRif_imX-x5IRg5Uj0nE65WuFLDg-LAZ_ha_LdNCvqbHAG2Qb4xXCOOIuJhSCtp0&t=ffffffff85e60464", 
		"Resource=1", 
		"Referer=https://vsearch.vodafone.in/sites/Vgyan/_layouts/15/VodafonekMS/Pages/ErrorPage/LoginError.aspx?error=Sorry!!%20Your%20session%20has%20expired.%20To%20continue%20browsing%20in%20KMS%20please%20click%20on%20HOME.", 
		"Snapshot=t7.inf", 
		LAST);

	web_url("strings.js", 
		"URL=https://vsearch.vodafone.in/_layouts/15/1033/strings.js?rev=xXYZY4hciX287lShPZuClw%3D%3D", 
		"Resource=1", 
		"Referer=https://vsearch.vodafone.in/sites/Vgyan/_layouts/15/VodafonekMS/Pages/ErrorPage/LoginError.aspx?error=Sorry!!%20Your%20session%20has%20expired.%20To%20continue%20browsing%20in%20KMS%20please%20click%20on%20HOME.", 
		"Snapshot=t8.inf", 
		LAST);

	web_url("core.js", 
		"URL=https://vsearch.vodafone.in/_layouts/15/core.js?rev=GpU7vxyOqzS0F9OfEX3CCw%3D%3D", 
		"Resource=1", 
		"Referer=https://vsearch.vodafone.in/sites/Vgyan/_layouts/15/VodafonekMS/Pages/ErrorPage/LoginError.aspx?error=Sorry!!%20Your%20session%20has%20expired.%20To%20continue%20browsing%20in%20KMS%20please%20click%20on%20HOME.", 
		"Snapshot=t10.inf", 
		LAST);

	web_url("jquery-3.2.1.js", 
		"URL=https://vsearch.vodafone.in/_layouts/15/VodafoneKMS/JSFiles/jquery-3.2.1.js", 
		"Resource=1", 
		"Referer=https://vsearch.vodafone.in/sites/Vgyan/_layouts/15/VodafonekMS/Pages/ErrorPage/LoginError.aspx?error=Sorry!!%20Your%20session%20has%20expired.%20To%20continue%20browsing%20in%20KMS%20please%20click%20on%20HOME.", 
		"Snapshot=t12.inf", 
		LAST);

	web_url("ScriptResource.axd_2", 
		"URL=https://vsearch.vodafone.in/ScriptResource.axd?d=JGjVta2CnGgljc6FY3AWKxCtYjXpEie9Gp_7J4uD5mauRglGJaXui2XHiXgSH-gy9fyvMutsU33X3Pjqy9rb107G5LAsya7tVlQ-5NRhVs1AfW3XyNkoiSFGoxpE5h9myCwiWvb_tqAuNQegE82StIind7B1cNAagNe2swuviEznts8VItfLSrE56hNAgjCo0&t=ffffffff85e60464", 
		"Resource=1", 
		"Referer=https://vsearch.vodafone.in/sites/Vgyan/_layouts/15/VodafonekMS/Pages/ErrorPage/LoginError.aspx?error=Sorry!!%20Your%20session%20has%20expired.%20To%20continue%20browsing%20in%20KMS%20please%20click%20on%20HOME.", 
		"Snapshot=t13.inf", 
		LAST);

	web_url("blank.js", 
		"URL=https://vsearch.vodafone.in/_layouts/15/blank.js?rev=ZaOXZEobVwykPO9g8hq%2F8A%3D%3D", 
		"Resource=1", 
		"Referer=https://vsearch.vodafone.in/sites/Vgyan/_layouts/15/VodafonekMS/Pages/ErrorPage/LoginError.aspx?error=Sorry!!%20Your%20session%20has%20expired.%20To%20continue%20browsing%20in%20KMS%20please%20click%20on%20HOME.", 
		"Snapshot=t14.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_url("WebResource.axd", 
		"URL=https://vsearch.vodafone.in/WebResource.axd?d=HQMLKvgEnNXRLrXovIl9wAOXzka2jPIp9eUOtb9Vt-GXTeOyJN5LVPALuLwWcq36rW1qgaOLSOHEUVKlZgFuNcv2Xjf9anJegii6teYRxsw1&t=636289152966629520", 
		"Resource=1", 
		"Referer=https://vsearch.vodafone.in/sites/Vgyan/_layouts/15/VodafonekMS/Pages/ErrorPage/LoginError.aspx?error=Sorry!!%20Your%20session%20has%20expired.%20To%20continue%20browsing%20in%20KMS%20please%20click%20on%20HOME.", 
		"Snapshot=t9.inf", 
		LAST);

	web_url("Vodafonelogo.png", 
		"URL=https://vsearch.vodafone.in/_layouts/15/IMAGES/VodafoneKMS/Vodafonelogo.png", 
		"Resource=1", 
		"Referer=https://vsearch.vodafone.in/sites/Vgyan/_layouts/15/VodafonekMS/Pages/ErrorPage/LoginError.aspx?error=Sorry!!%20Your%20session%20has%20expired.%20To%20continue%20browsing%20in%20KMS%20please%20click%20on%20HOME.", 
		"Snapshot=t11.inf", 
		LAST);

	web_add_cookie("WSS_FullScreenMode=false; DOMAIN=vsearch.vodafone.in");

	web_url("favicon.ico", 
		"URL=https://vsearch.vodafone.in/favicon.ico", 
		"Resource=1", 
		"Referer=", 
		"Snapshot=t15.inf", 
		LAST);

	lr_end_transaction("Login_Page",LR_AUTO);

	lr_start_transaction("Post_Login_Page");

	web_url("Vgyan", 
		"URL=https://vsearch.vodafone.in/sites/Vgyan", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://vsearch.vodafone.in/sites/Vgyan/_layouts/15/VodafonekMS/Pages/ErrorPage/LoginError.aspx?error=Sorry!!%20Your%20session%20has%20expired.%20To%20continue%20browsing%20in%20KMS%20please%20click%20on%20HOME.", 
		"Snapshot=t16.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_cookie("ASP.NET_SessionId=mbv3l1gaykrk4xzafmdfwbap; DOMAIN=vsearch.vodafone.in");

	web_concurrent_start(NULL);

	web_url("corev15.css", 
		"URL=https://vsearch.vodafone.in/_layouts/15/1033/styles/corev15.css?rev=2bpHeX9U8DH09TB5zpJcsQ%3D%3D", 
		"Resource=1", 
		"Referer=https://vsearch.vodafone.in/sites/Vgyan/_layouts/15/VodafoneKMS/Pages/LandingPage.aspx", 
		"Snapshot=t17.inf", 
		LAST);

	web_url("layouts.css", 
		"URL=https://vsearch.vodafone.in/_layouts/15/1033/styles/layouts.css?rev=yjFBueP7AVGIM6zbphXe6Q%3D%3D", 
		"Resource=1", 
		"Referer=https://vsearch.vodafone.in/sites/Vgyan/_layouts/15/VodafoneKMS/Pages/LandingPage.aspx", 
		"Snapshot=t18.inf", 
		LAST);

	web_url("LandingPage.css", 
		"URL=https://vsearch.vodafone.in/_layouts/15/1033/styles/LandingPage.css?rev=pQM%2ByP9KffioWxhUcSuNag%3D%3D", 
		"Resource=1", 
		"Referer=https://vsearch.vodafone.in/sites/Vgyan/_layouts/15/VodafoneKMS/Pages/LandingPage.aspx", 
		"Snapshot=t19.inf", 
		LAST);

	web_url("KMSStylesheet.css_2", 
		"URL=https://vsearch.vodafone.in/_layouts/15/1033/styles/KMSStylesheet.css?rev=R7yXyuFYp8DtJ3q7sNJxcw%3D%3D", 
		"Resource=1", 
		"Referer=https://vsearch.vodafone.in/sites/Vgyan/_layouts/15/VodafoneKMS/Pages/LandingPage.aspx", 
		"Snapshot=t20.inf", 
		LAST);

	web_url("menus.css", 
		"URL=https://vsearch.vodafone.in/_layouts/15/1033/STYLES/menus.css", 
		"Resource=1", 
		"Referer=https://vsearch.vodafone.in/sites/Vgyan/_layouts/15/VodafoneKMS/Pages/LandingPage.aspx", 
		"Snapshot=t21.inf", 
		LAST);

	web_url("jquery-ui.css", 
		"URL=https://vsearch.vodafone.in/_layouts/15/1033/STYLES/jquery-ui.css", 
		"Resource=1", 
		"Referer=https://vsearch.vodafone.in/sites/Vgyan/_layouts/15/VodafoneKMS/Pages/LandingPage.aspx", 
		"Snapshot=t22.inf", 
		LAST);

	web_url("jquery-ui.js", 
		"URL=https://vsearch.vodafone.in/_layouts/15/VodafoneKMS/JSFiles/jquery-ui.js", 
		"Resource=1", 
		"Referer=https://vsearch.vodafone.in/sites/Vgyan/_layouts/15/VodafoneKMS/Pages/LandingPage.aspx", 
		"Snapshot=t27.inf", 
		LAST);

	web_url("jquery-1.8.3.js", 
		"URL=https://vsearch.vodafone.in/_layouts/15/VodafoneKMS/JSFiles/jquery-1.8.3.js", 
		"Resource=1", 
		"Referer=https://vsearch.vodafone.in/sites/Vgyan/_layouts/15/VodafoneKMS/Pages/LandingPage.aspx", 
		"Snapshot=t28.inf", 
		LAST);

	web_url("TakeQuiz.png", 
		"URL=https://vsearch.vodafone.in/sites/Vgyan/_layouts/15/IMAGES/VodafoneKMS/TakeQuiz.png", 
		"Resource=1", 
		"Referer=https://vsearch.vodafone.in/sites/Vgyan/_layouts/15/VodafoneKMS/Pages/LandingPage.aspx", 
		"Snapshot=t29.inf", 
		LAST);

	web_url("newicon.gif_2", 
		"URL=https://vsearch.vodafone.in/_layouts/15/IMAGES/VodafoneKMS/newicon.gif", 
		"Resource=1", 
		"Referer=https://vsearch.vodafone.in/sites/Vgyan/_layouts/15/VodafoneKMS/Pages/LandingPage.aspx", 
		"Snapshot=t30.inf", 
		LAST);

	web_url("DBIcon.gif", 
		"URL=https://vsearch.vodafone.in/sites/Vgyan/_layouts/15/IMAGES/VodafoneKMS/DBIcon.gif", 
		"Resource=1", 
		"Referer=https://vsearch.vodafone.in/sites/Vgyan/_layouts/15/VodafoneKMS/Pages/LandingPage.aspx", 
		"Snapshot=t32.inf", 
		LAST);

	web_url("NoQuiz.png", 
		"URL=https://vsearch.vodafone.in/sites/Vgyan/_layouts/15/IMAGES/VodafoneKMS/NoQuiz.png", 
		"Resource=1", 
		"Referer=https://vsearch.vodafone.in/sites/Vgyan/_layouts/15/VodafoneKMS/Pages/LandingPage.aspx", 
		"Snapshot=t33.inf", 
		LAST);

	web_url("Quickright.png", 
		"URL=https://vsearch.vodafone.in/sites/Vgyan/_layouts/15/IMAGES/VodafoneKMS/Quickright.png", 
		"Resource=1", 
		"Referer=https://vsearch.vodafone.in/sites/Vgyan/_layouts/15/VodafoneKMS/Pages/LandingPage.aspx", 
		"Snapshot=t34.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_concurrent_start(NULL);

	web_url("ScriptResource.axd_3", 
		"URL=https://vsearch.vodafone.in/ScriptResource.axd?d=Ot5GWfNuSqSrmkrE0nidvXVQ06OgNAVDrBAGu2jSSI3b4w2Fphr8uchi1BS8e_Zv_rfqhXRn4Hm_oFut4CSECRSuFM27DNxsbXeDwY-j2MWO1JfnMIJMjuC86pgUJfoR-9Xg_nkIOrpv7BmS_ccO8InU-JeYqecgYSldl3GdJJo1&t=71fba30a", 
		"Resource=1", 
		"Referer=https://vsearch.vodafone.in/sites/Vgyan/_layouts/15/VodafoneKMS/Pages/LandingPage.aspx", 
		"Snapshot=t23.inf", 
		LAST);

	web_url("newicon.gif", 
		"URL=https://vsearch.vodafone.in/_layouts/15/images/VodafoneKMS/newicon.gif", 
		"Resource=1", 
		"Referer=https://vsearch.vodafone.in/sites/Vgyan/_layouts/15/VodafoneKMS/Pages/LandingPage.aspx", 
		"Snapshot=t24.inf", 
		LAST);

	web_url("vsearch.png", 
		"URL=https://vsearch.vodafone.in/_layouts/15/IMAGES/VodafoneKMS/vsearch.png", 
		"Resource=1", 
		"Referer=https://vsearch.vodafone.in/sites/Vgyan/_layouts/15/VodafoneKMS/Pages/LandingPage.aspx", 
		"Snapshot=t25.inf", 
		LAST);

	web_url("WebResource.axd_2", 
		"URL=https://vsearch.vodafone.in/WebResource.axd?d=Fnf2BLXYjwAzfj4WG9PBvoebcyND_Xkwjw1HW_pOSNJZyOs6-bUviLL87tTWSiZzBMJV1Zx8MnrsWAj7uVLyx0n5_kt5TX9eTrVW9RCKI_o1&t=636289152966629520", 
		"Resource=1", 
		"Referer=https://vsearch.vodafone.in/sites/Vgyan/_layouts/15/VodafoneKMS/Pages/LandingPage.aspx", 
		"Snapshot=t26.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_url("Document.png", 
		"URL=https://vsearch.vodafone.in/sites/Vgyan/_layouts/15/IMAGES/VodafoneKMS/Document.png", 
		"Resource=1", 
		"Referer=https://vsearch.vodafone.in/sites/Vgyan/_layouts/15/VodafoneKMS/Pages/LandingPage.aspx", 
		"Snapshot=t31.inf", 
		LAST);

	web_concurrent_start(NULL);

	web_url("vsearchlanding.png", 
		"URL=https://vsearch.vodafone.in/sites/Vgyan/_layouts/15/images/VodafoneKMS/vsearchlanding.png", 
		"Resource=1", 
		"Referer=https://vsearch.vodafone.in/sites/Vgyan/_layouts/15/VodafoneKMS/Pages/LandingPage.aspx", 
		"Snapshot=t35.inf", 
		LAST);

	web_url("headlines.png", 
		"URL=https://vsearch.vodafone.in/_layouts/15/IMAGES/VodafoneKMS/headlines.png", 
		"Resource=1", 
		"Referer=https://vsearch.vodafone.in/sites/Vgyan/_layouts/15/VodafoneKMS/Pages/LandingPage.aspx", 
		"Snapshot=t36.inf", 
		LAST);

	web_url("video.png", 
		"URL=https://vsearch.vodafone.in/_layouts/15/IMAGES/VodafoneKMS/video.png", 
		"Resource=1", 
		"Referer=https://vsearch.vodafone.in/sites/Vgyan/_layouts/15/VodafoneKMS/Pages/LandingPage.aspx", 
		"Snapshot=t37.inf", 
		LAST);

	web_url("Classified.png", 
		"URL=https://vsearch.vodafone.in/_layouts/15/IMAGES/VodafoneKMS/Classified.png", 
		"Resource=1", 
		"Referer=https://vsearch.vodafone.in/sites/Vgyan/_layouts/15/VodafoneKMS/Pages/LandingPage.aspx", 
		"Snapshot=t38.inf", 
		LAST);

	web_url("ask.png", 
		"URL=https://vsearch.vodafone.in/_layouts/15/IMAGES/VodafoneKMS/ask.png", 
		"Resource=1", 
		"Referer=https://vsearch.vodafone.in/sites/Vgyan/_layouts/15/VodafoneKMS/Pages/LandingPage.aspx", 
		"Snapshot=t39.inf", 
		LAST);

	web_url("FAQ.png", 
		"URL=https://vsearch.vodafone.in/_layouts/15/IMAGES/VodafoneKMS/FAQ.png", 
		"Resource=1", 
		"Referer=https://vsearch.vodafone.in/sites/Vgyan/_layouts/15/VodafoneKMS/Pages/LandingPage.aspx", 
		"Snapshot=t40.inf", 
		LAST);

	web_url("WebResource.axd_3", 
		"URL=https://vsearch.vodafone.in/WebResource.axd?d=_r8oyf3ZHbT-DYYyU7_8VTs5t9GClMZzoxyi5ed4bEN006OkihfKkVbjwkZfqLXKwzGHUat3UYQ-loOAUuq19tqFXlvmH78VFBmzqrvi9a5iGlL7Zp07XN-urABzWDoK0&t=636289152966629520", 
		"Resource=1", 
		"Referer=https://vsearch.vodafone.in/sites/Vgyan/_layouts/15/VodafoneKMS/Pages/LandingPage.aspx", 
		"Snapshot=t41.inf", 
		LAST);

	web_url("selected.gif", 
		"URL=https://vsearch.vodafone.in/_layouts/15/IMAGES/VodafoneKMS/selected.gif", 
		"Resource=1", 
		"Referer=https://vsearch.vodafone.in/sites/Vgyan/_layouts/15/VodafoneKMS/Pages/LandingPage.aspx", 
		"Snapshot=t42.inf", 
		LAST);

	web_url("normal.gif", 
		"URL=https://vsearch.vodafone.in/_layouts/15/IMAGES/VodafoneKMS/normal.gif", 
		"Resource=1", 
		"Referer=https://vsearch.vodafone.in/sites/Vgyan/_layouts/15/VodafoneKMS/Pages/LandingPage.aspx", 
		"Snapshot=t43.inf", 
		LAST);

	web_concurrent_end(NULL);

	/*web_custom_request("PredSearch", 
		"URL=https://vsearch.vodafone.in/sites/Vgyan/_layouts/15/VodafoneKMS/Pages/LandingPage.aspx/PredSearch", 
		"Method=POST", 
		"Resource=0", 
		"Referer=https://vsearch.vodafone.in/sites/Vgyan/_layouts/15/VodafoneKMS/Pages/LandingPage.aspx", 
		"Snapshot=t44.inf", 
		"Mode=HTTP", 
		"EncType=application/json; charset=utf-8", 
		LAST);*/

	web_concurrent_start(NULL);

	web_url("ProcessDocuments.png", 
		"URL=https://vsearch.vodafone.in/_layouts/15/images/VodafoneKMS/ProcessDocuments.png", 
		"Resource=1", 
		"Referer=https://vsearch.vodafone.in/sites/Vgyan/_layouts/15/VodafoneKMS/Pages/LandingPage.aspx", 
		"Snapshot=t45.inf", 
		LAST);

	web_url("DailyBriefs.png", 
		"URL=https://vsearch.vodafone.in/_layouts/15/images/VodafoneKMS/DailyBriefs.png", 
		"Resource=1", 
		"Referer=https://vsearch.vodafone.in/sites/Vgyan/_layouts/15/VodafoneKMS/Pages/LandingPage.aspx", 
		"Snapshot=t46.inf", 
		LAST);

	web_url("WhatNew.png", 
		"URL=https://vsearch.vodafone.in/_layouts/15/images/VodafoneKMS/WhatNew.png", 
		"Resource=1", 
		"Referer=https://vsearch.vodafone.in/sites/Vgyan/_layouts/15/VodafoneKMS/Pages/LandingPage.aspx", 
		"Snapshot=t47.inf", 
		LAST);

	web_url("PlansAndOffers.png", 
		"URL=https://vsearch.vodafone.in/_layouts/15/images/VodafoneKMS/PlansAndOffers.png", 
		"Resource=1", 
		"Referer=https://vsearch.vodafone.in/sites/Vgyan/_layouts/15/VodafoneKMS/Pages/LandingPage.aspx", 
		"Snapshot=t48.inf", 
		LAST);

	web_url("Quicklinks.png", 
		"URL=https://vsearch.vodafone.in/_layouts/15/images/VodafoneKMS/Quicklinks.png", 
		"Resource=1", 
		"Referer=https://vsearch.vodafone.in/sites/Vgyan/_layouts/15/VodafoneKMS/Pages/LandingPage.aspx", 
		"Snapshot=t49.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_url("favicon.ico_2", 
		"URL=https://vsearch.vodafone.in/_layouts/15/images/favicon.ico", 
		"Resource=1", 
		"Referer=", 
		"Snapshot=t50.inf", 
		LAST);

	lr_end_transaction("Post_Login_Page",LR_AUTO);

	lr_start_transaction("Logout_Page");

	web_url("closeConnection.aspx", 
		"URL=https://vsearch.vodafone.in/sites/Vgyan/_layouts/15/closeConnection.aspx?loginasanotheruser=true&Source=https://vsearch.vodafone.in/sites/Vgyan", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://vsearch.vodafone.in/sites/Vgyan/_layouts/15/VodafoneKMS/Pages/LandingPage.aspx", 
		"Snapshot=t51.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_start(NULL);

	web_url("accessdenied.aspx", 
		"URL=https://vsearch.vodafone.in/sites/Vgyan/_layouts/15/accessdenied.aspx?closeConnection=04", 
		"Resource=1", 
		"Referer=https://vsearch.vodafone.in/sites/Vgyan/_layouts/15/closeConnection.aspx?loginasanotheruser=true&Source=https://vsearch.vodafone.in/sites/Vgyan", 
		"Snapshot=t52.inf", 
		LAST);

	web_url("accessdenied.aspx_2", 
		"URL=https://vsearch.vodafone.in/sites/Vgyan/_layouts/15/accessdenied.aspx?closeConnection=02", 
		"Resource=1", 
		"Referer=https://vsearch.vodafone.in/sites/Vgyan/_layouts/15/closeConnection.aspx?loginasanotheruser=true&Source=https://vsearch.vodafone.in/sites/Vgyan", 
		"Snapshot=t53.inf", 
		LAST);

	web_url("accessdenied.aspx_3", 
		"URL=https://vsearch.vodafone.in/sites/Vgyan/_layouts/15/accessdenied.aspx?closeConnection=07", 
		"Resource=1", 
		"Referer=https://vsearch.vodafone.in/sites/Vgyan/_layouts/15/closeConnection.aspx?loginasanotheruser=true&Source=https://vsearch.vodafone.in/sites/Vgyan", 
		"Snapshot=t54.inf", 
		LAST);

	web_url("accessdenied.aspx_4", 
		"URL=https://vsearch.vodafone.in/sites/Vgyan/_layouts/15/accessdenied.aspx?closeConnection=09", 
		"Resource=1", 
		"Referer=https://vsearch.vodafone.in/sites/Vgyan/_layouts/15/closeConnection.aspx?loginasanotheruser=true&Source=https://vsearch.vodafone.in/sites/Vgyan", 
		"Snapshot=t55.inf", 
		LAST);

	web_url("accessdenied.aspx_5", 
		"URL=https://vsearch.vodafone.in/sites/Vgyan/_layouts/15/accessdenied.aspx?closeConnection=10", 
		"Resource=1", 
		"Referer=https://vsearch.vodafone.in/sites/Vgyan/_layouts/15/closeConnection.aspx?loginasanotheruser=true&Source=https://vsearch.vodafone.in/sites/Vgyan", 
		"Snapshot=t56.inf", 
		LAST);

	web_url("accessdenied.aspx_6", 
		"URL=https://vsearch.vodafone.in/sites/Vgyan/_layouts/15/accessdenied.aspx?closeConnection=11", 
		"Resource=1", 
		"Referer=https://vsearch.vodafone.in/sites/Vgyan/_layouts/15/closeConnection.aspx?loginasanotheruser=true&Source=https://vsearch.vodafone.in/sites/Vgyan", 
		"Snapshot=t57.inf", 
		LAST);

	web_url("accessdenied.aspx_7", 
		"URL=https://vsearch.vodafone.in/sites/Vgyan/_layouts/15/accessdenied.aspx?closeConnection=12", 
		"Resource=1", 
		"Referer=https://vsearch.vodafone.in/sites/Vgyan/_layouts/15/closeConnection.aspx?loginasanotheruser=true&Source=https://vsearch.vodafone.in/sites/Vgyan", 
		"Snapshot=t58.inf", 
		LAST);

	web_url("accessdenied.aspx_8", 
		"URL=https://vsearch.vodafone.in/sites/Vgyan/_layouts/15/accessdenied.aspx?closeConnection=05", 
		"Resource=1", 
		"Referer=https://vsearch.vodafone.in/sites/Vgyan/_layouts/15/closeConnection.aspx?loginasanotheruser=true&Source=https://vsearch.vodafone.in/sites/Vgyan", 
		"Snapshot=t59.inf", 
		LAST);

	web_url("accessdenied.aspx_9", 
		"URL=https://vsearch.vodafone.in/sites/Vgyan/_layouts/15/accessdenied.aspx?closeConnection=08", 
		"Resource=1", 
		"Referer=https://vsearch.vodafone.in/sites/Vgyan/_layouts/15/closeConnection.aspx?loginasanotheruser=true&Source=https://vsearch.vodafone.in/sites/Vgyan", 
		"Snapshot=t60.inf", 
		LAST);

	web_url("accessdenied.aspx_10", 
		"URL=https://vsearch.vodafone.in/sites/Vgyan/_layouts/15/accessdenied.aspx?closeConnection=03", 
		"Resource=1", 
		"Referer=https://vsearch.vodafone.in/sites/Vgyan/_layouts/15/closeConnection.aspx?loginasanotheruser=true&Source=https://vsearch.vodafone.in/sites/Vgyan", 
		"Snapshot=t61.inf", 
		LAST);

	web_url("accessdenied.aspx_11", 
		"URL=https://vsearch.vodafone.in/sites/Vgyan/_layouts/15/accessdenied.aspx?closeConnection=06", 
		"Resource=1", 
		"Referer=https://vsearch.vodafone.in/sites/Vgyan/_layouts/15/closeConnection.aspx?loginasanotheruser=true&Source=https://vsearch.vodafone.in/sites/Vgyan", 
		"Snapshot=t62.inf", 
		LAST);

	web_url("accessdenied.aspx_12", 
		"URL=https://vsearch.vodafone.in/sites/Vgyan/_layouts/15/accessdenied.aspx?closeConnection=01", 
		"Resource=1", 
		"Referer=https://vsearch.vodafone.in/sites/Vgyan/_layouts/15/closeConnection.aspx?loginasanotheruser=true&Source=https://vsearch.vodafone.in/sites/Vgyan", 
		"Snapshot=t63.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_url("favicon.ico_3", 
		"URL=https://vsearch.vodafone.in/favicon.ico", 
		"Resource=1", 
		"Referer=", 
		"Snapshot=t64.inf", 
		LAST);

	lr_end_transaction("Logout_Page",LR_AUTO);

	return 0;
}