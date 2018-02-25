# Copyright (C) 2017 Pure Fusion OS
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#      http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.


# Inherit AOSP device configuration for pme
#$(call inherit-product, device/htc/pme/aosp_pme.mk)


# Inherit from those products. Most specific first.
$(call inherit-product, $(SRC_TARGET_DIR)/product/core_64_bit.mk)
$(call inherit-product, $(SRC_TARGET_DIR)/product/full_base_telephony.mk)

# Inherit from pme device
$(call inherit-product, device/htc/pme/device.mk)

# Inherit some common ResurrectionRemix stuff.
$(call inherit-product, vendor/rr/config/common_full_phone.mk)


# Boot animation
TARGET_SCREEN_HEIGHT := 2560
TARGET_SCREEN_WIDTH := 1440


# Set those variables here to overwrite the inherited values.

PRODUCT_DEVICE := pme
PRODUCT_NAME := rr_pme
PRODUCT_BRAND := HTC
PRODUCT_MODEL := HTC 10
PRODUCT_MANUFACTURER := HTC
PRODUCT_RELEASE_NAME := pme

TARGET_VENDOR := htc

