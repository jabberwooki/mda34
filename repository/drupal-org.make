api = 2
core = 7.x

;=== Contrib modules ==========================================================
projects[admin_menu][subdir] = contrib
projects[admin_menu][version] = "3.0-rc5"

projects[better_formats][subdir] = contrib
projects[better_formats][version] = "1.0-beta1"

projects[ctools][subdir] = contrib
projects[ctools][version] = "1.9"

projects[ds][subdir] = contrib
projects[ds][version] = "2.11"

projects[entity][subdir] = contrib
projects[entity][version] = "1.6"

projects[features][subdir] = contrib
projects[features][version] = "2.4"

projects[features_extra][subdir] = contrib
projects[features_extra][version] = "1.0-beta1"

projects[field_group][subdir] = contrib
projects[field_group][version] = "1.4"

projects[files_undo_remove][subdir] = contrib
projects[files_undo_remove][version] = "1.3"

projects[imce][subdir] = contrib
projects[imce][version] = "1.9"

projects[imce_mkdir][subdir] = contrib
projects[imce_mkdir][version] = "1.0"

projects[jquery_update][subdir] = contrib
projects[jquery_update][version] = "2.6"

projects[l10n_update][subdir] = contrib
projects[l10n_update][version] = "2.0"

projects[libraries][subdir] = contrib
projects[libraries][version] = "2.2"

projects[link][subdir] = contrib
projects[link][version] = "1.3"

projects[linkit][subdir] = contrib
projects[linkit][version] = "3.3"

projects[options_element][subdir] = contrib
projects[options_element][version] = "1.12"

projects[role_export][subdir] = contrib
projects[role_export][version] = "1.0"

projects[strongarm][subdir] = contrib
projects[strongarm][version] = "2.0"

projects[taxonomy_access_fix][subdir] = contrib
projects[taxonomy_access_fix][version] = "2.1"

projects[token][subdir] = contrib
projects[token][version] = "1.6"

projects[user_settings_access][subdir] = contrib
projects[user_settings_access][version] = "1.0"

projects[uuid][subdir] = contrib
projects[uuid][version] = "1.0-alpha6"

projects[uuid_features][subdir] = contrib
projects[uuid_features][version] = "1.0-alpha4"

projects[views][subdir] = contrib
projects[views][version] = "3.11"

;=== Modules - optional =======================================================
projects[addressfield][subdir] = contrib
projects[addressfield][version] = "1.0"

;projects[bean][subdir] = contrib
;projects[bean][version] = "1.9"

projects[block_class][subdir] = contrib
projects[block_class][version] = "2.1"

projects[boxes][subdir] = contrib
projects[boxes][version] = "1.2"

projects[custom_search][subdir] = contrib
projects[custom_search][version] = "1.18"

projects[date][subdir] = contrib
projects[date][version] = "2.8"

projects[email][subdir] = contrib
projects[email][version] = "1.3"

projects[email_registration][subdir] = contrib
projects[email_registration][version] = "1.2"

projects[entityreference][subdir] = contrib
projects[entityreference][version] = "1.1"

projects[entityform][subdir] = contrib
projects[entityform][version] = "2.0-rc1"

projects[field_collection][subdir] = contrib
projects[field_collection][version] = "1.0-beta8"

projects[field_formatter_class][subdir] = contrib
projects[field_formatter_class][version] = "1.1"

projects[field_formatter_settings][subdir] = contrib
projects[field_formatter_settings][version] = "1.1"

projects[filefield_sources][subdir] = contrib
projects[filefield_sources][version] = "1.9"

projects[menu_trail_by_path][subdir] = contrib
projects[menu_trail_by_path][version] = "2.0"
;projects[migrate][subdir] = contrib
;projects[migrate][version] = "2.7"

;projects[migrate_extras][subdir] = contrib
;projects[migrate_extras][version] = "2.5"

projects[phone][subdir] = contrib
projects[phone][version] = "1.0-beta1"

projects[references_dialog][subdir] = contrib
projects[references_dialog][version] = "1.0-beta1"

projects[rules][subdir] = contrib
projects[rules][version] = "2.9"

;projects[views_bulk_operations][subdir] = contrib
;projects[views_bulk_operations][version] = "3.2"

;projects[views_slideshow][subdir] = contrib
;projects[views_slideshow][version] = "3.1"

;=== Kstarter features modules ================================================
includes[seo] = makefiles/seo.make
; Feature kpages doesn't need additionnal modules.
includes[edition] = makefiles/edition.make
includes[contextes] = makefiles/contextes.make
includes[development] = makefiles/development.make

;--- Optional -----------------------------------------------------------------
includes[webstats_google] = makefiles/wstatsgoogle.make
;includes[webstats_piwik] = makefiles/wstatspiwik.make
;includes[agenda] = makefiles/agenda.make
;includes[news] = makefiles/news.make

;=== Themes ===================================================================
; Admin themes
includes[adminimal] = makefiles/themes/adminimal.make
;includes[rubik] = makefiles/themes/rubik.make

; Front themes
;-------------
includes[bootstrap] = makefiles/themes/bootstrap.make
;includes[foundation] = makefiles/themes/foundation.make
;includes[omega] = makefiles/themes/omega.make

;=== Contrib modules and libraries for MDA34 ==================================
;--- Domain Access related ----------------------------------------------------
projects[domain][subdir] = contrib
projects[domain][version] = "3.11"

projects[domaincontext][subdir] = contrib
projects[domaincontext][version] = "1.0-alpha1"

projects[domain_menu_access][subdir] = contrib
projects[domain_menu_access][version] = "1.2"

projects[domain_views][subdir] = contrib
projects[domain_views][version] = "1.5"

;--- Scald and media related --------------------------------------------------
projects[audio_js][subdir] = contrib
projects[audio_js][version] = "1.2"

projects[scald][subdir] = contrib
projects[scald][version] = "1.5"

projects[scald_file][subdir] = contrib
projects[scald_file][version] = "1.2"

projects[scald_dailymotion][subdir] = contrib
projects[scald_dailymotion][version] = "1.4"

projects[scald_vimeo][subdir] = contrib
projects[scald_vimeo][version] = "1.4"

projects[scald_youtube][subdir] = contrib
projects[scald_youtube][version] = "1.5"

projects[scald_soundcloud][subdir] = contrib
projects[scald_soundcloud][version] = "1.2"

projects[scald_gallery][subdir] = contrib
projects[scald_gallery][version] = "2.5"

projects[filefield_sources][subdir] = contrib
projects[filefield_sources][version] = "1.9"

projects[filefield_sources_scald][subdir] = contrib
projects[filefield_sources_scald][version] = "1.1"

projects[plupload][subdir] = contrib
projects[plupload][version] = "1.7"

;--- Maps ---------------------------------------------------------------------
projects[geocoder][subdir] = contrib
projects[geocoder][version] = "1.2"
projects[geocoder][patch][] = "https://www.drupal.org/files/issues/geocoder-mapquest-nominatim-1748412-46.patch"

projects[geofield][subdir] = contrib
projects[geofield][version] = "2.3"

projects[geophp][subdir] = contrib
projects[geophp][version] = "1.7"

projects[leaflet][subdir] = contrib
projects[leaflet][version] = "1.1"

libraries[leaflet][download][type] = "file"
libraries[leaflet][download][url] = "http://leaflet-cdn.s3.amazonaws.com/build/leaflet-0.7.3.zip"
libraries[leaflet][directory_name] = "leaflet"
libraries[leaflet][destination] = "libraries"

projects[gmap][subdir] = contrib
projects[gmap][version] = "2.9"

projects[addressfield_autocomplete][subdir] = contrib
projects[addressfield_autocomplete][version] = "1.0-beta5"

libraries[geocomplete][download][type] = "file"
libraries[geocomplete][download][url] = "https://github.com/ubilabs/geocomplete/archive/1.6.4.tar.gz"
libraries[geocomplete][directory_name] = "geocomplete"
libraries[geocomplete][destination] = "libraries"

;--- Events -------------------------------------------------------------------
projects[registration][subdir] = contrib
projects[registration][version] = "1.6"

;--- Newsletter ---------------------------------------------------------------
projects[mailchimp][subdir] = contrib
projects[mailchimp][version] = "3.3"

;--- Others -------------------------------------------------------------------
projects[office_hours][subdir] = contrib
projects[office_hours][version] = "1.4"

projects[views_isotope][subdir] = contrib
projects[views_isotope][version] = "1.0-beta2"

projects[sharethis][subdir] = contrib
projects[sharethis][version] = "2.12"

projects[menu_attributes][subdir] = contrib
projects[menu_attributes][version] = "1.0-rc3"

projects[views_autocomplete_filters][subdir] = contrib
projects[views_autocomplete_filters][version] = "1.2"

projects[mollom][subdir] = contrib
projects[mollom][version] = "2.14"

projects[l10n_update][subdir] = contrib
projects[l10n_update][version] = "2.0"

projects[profile2][subdir] = contrib
projects[profile2[version] = "1.3"

projects[eu_cookie_compliance][subdir] = contrib
projects[eu_cookie_compliance][version] = "1.14"

projects[jquery_colorpicker][subdir] = contrib
projects[jquery_colorpicker][version] = "1.1"

projects[entityform_block][subdir] = contrib
projects[entityform_block][version] = "1.3"

projects[fb_likebox][subdir] = contrib
projects[fb_likebox][version] = "2.2"

projects[patterns][subdir] = contrib
projects[patterns][version] = "2.2"

