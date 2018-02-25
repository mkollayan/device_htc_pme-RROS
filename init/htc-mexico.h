/* props/mexico-1.02: HTC LA ESN Telcel: HTC__332 */
static bool is_variant_mexico(std::string bootcid) {
    if (bootcid == "HTC__332") return true;
    return false;
}

static const char *htc_mexico_properties =
    "ro.build.fingerprint=htc/pmewl_00600/htc_pmewl:6.0.1/MMB29M/737608.3:user/release-keys\n"
    "ro.build.product=htc_pmewl\n"
    "ro.product.device=htc_pmewl\n"
    "ro.product.model=HTC 10\n"
    "ro.phone.min_match=10\n"
    "ro.ril.vmail.334020=*86\n"
    "ro.ril.oem.ecclist=060,911,112\n"
    "ro.ril.oem.nosim.ecclist=060\n"
    "ro.ril.enable.a52=0\n"
    "ro.ril.enable.a53=1\n"
    "ro.ril.enable.dtm=1\n"
    "ro.ril.enable.gea3=1\n"
    "ro.ril.enable.amr.wideband=1\n"
    "ro.ril.gprsclass=12\n"
    "ro.ril.enable.sdr=0\n"
    "ro.ril.enable.pre_r8fd=1\n"
    "ro.ril.fd.pre_r8_tout.scr_off=0\n"
    "ro.ril.fd.pre_r8_tout.scr_on=0\n"
    "ro.ril.enable.r8fd=1\n"
    "ro.ril.fd.r8_tout.scr_off=2\n"
    "ro.ril.fd.r8_tout.scr_on=3\n"
    "ro.ril.oem.show.act=1\n"
    "ro.gsm.data_retry_config=max_retries=infinite,45000\n"
    "ro.gsm.2nd_data_retry_config=max_retries=infinite,45000\n"
    "ro.ril.hsxpa=4\n"
    "ro.ril.hsdpa.category=24\n"
    "ro.ril.hsupa.category=6\n"
    "ro.ril.disable.cpc=1\n"
    "ril.disable.ca=1\n"
    "persist.rild.nitz_plmn=\n"
    "persist.rild.nitz_long_ons_0=\n"
    "persist.rild.nitz_long_ons_1=\n"
    "persist.rild.nitz_long_ons_2=\n"
    "persist.rild.nitz_long_ons_3=\n"
    "persist.rild.nitz_short_ons_0=\n"
    "persist.rild.nitz_short_ons_1=\n"
    "persist.rild.nitz_short_ons_2=\n"
    "persist.rild.nitz_short_ons_3=\n"
    "ril.subscription.types=NV,RUIM\n"
    "telephony.lteOnCdmaDevice=1\n"
    "telephony.lteOnCdmaDevice=0\n"
    "persist.radio.fill_eons=1\n"
    "persist.igps.sensor=on\n"
    "persist.radio.custom_ecc=1\n"
    "persist.radio.apm_sim_not_pwdn=0\n"
    "persist.radio.apm_mdm_not_pwdn=1\n"
    "ro.telephony.default_network=9\n"
    "persist.radio.snapshot_timer=0\n"
    "persist.radio.VT_ENABLE=1\n"
    "persist.radio.VT_HYBRID_ENABLE=1\n"
    "persist.radio.ROTATION_ENABLE=1\n"
    "persist.radio.RATE_ADAPT_ENABLE=1\n"
    "persist.radio.videopause.mode=1\n"
    "telephony.lteOnCdmaDevice=0\n"
    "ro.gps.agps_provider=1\n"
;