// SPDX-License-Identifier: Apache-2.0
// app/ui/i18n/Strings.cpp — Compile-time multilingual string catalog (EN, IT, DE, FR, PL) (ADR-019)
#include "Strings.h"

namespace faro::ui::i18n {

namespace {
struct Row {
  const char* en;
  const char* it;
  const char* de;
  const char* fr;
  const char* pl;
};

static const Row kCatalog[size_t(StrId::_Count)] = {
  // TabChats
  {"Chats", "Chat", "Chats", "Discussions", "Czaty"},
  // TabChannels
  {"Channels", "Canali", "Kanäle", "Canaux", "Kanały"},
  // TabDiscover
  {"Discover", "Scopri", "Entdecken", "Découvrir", "Odkryj"},
  // TabMap
  {"Map", "Mappa", "Karte", "Carte", "Mapa"},
  // TabSettings
  {"Settings", "Impostaz.", "Optionen", "Réglages", "Ustaw."},
  // HomeDashboard
  {"Faro Mesh Dashboard", "Cruscotto Rete Faro", "Faro Mesh Übersicht", "Tableau de bord Faro", "Pulpit sieci Faro"},
  // DirectMessages
  {"Direct Messages", "Messaggi Diretti", "Direktnachrichten", "Messages directs", "Wiadomości prywatne"},
  // GroupChannels
  {"Group Channels", "Canali di Gruppo", "Gruppenkanäle", "Canaux de groupe", "Kanały grupowe"},
  // DiscoverMesh
  {"Discover nodes", "Scopri nodi", "Knoten suchen", "Découvrir les nœuds", "Wykrywanie węzłów"},
  // ContactsDir
  {"Contacts Directory", "Rubrica Contatti", "Kontaktverzeichnis", "Répertoire contacts", "Książka kontaktów"},
  // ContactDetails
  {"Contact & QR Share", "Contatto & QR", "Kontakt & QR-Code", "Contact & QR", "Kontakt i kod QR"},
  // TracePathTitle
  {"Multi-Hop Trace Path", "Tracciamento Percorso", "Multi-Hop Routenpfad", "Trace du chemin", "Śledzenie trasy"},
  // OfflineMapTitle
  {"Offline Alpine Map", "Mappa Alpina Offline", "Offline Alpenkarte", "Carte alpine hors-ligne", "Mapa alpejska offline"},
  // DiagnosticsTitle
  {"Radio & System Diagnostics", "Diagnostica Radio & Sistema", "Funk- & Systemdiagnose", "Diagnostic radio", "Diagnostyka radia"},
  // BootWizardTitle
  {"Welcome to Faro — Setup", "Benvenuto in Faro — Config.", "Willkommen bei Faro", "Bienvenue sur Faro", "Witaj w Faro — Start"},
  // BtnZeroHopAdvert
  {"0-Hop Advert", "Annuncio 0-Hop", "0-Hop Bake", "Annonce 0-saut", "Rozgłoszenie 0-Hop"},
  // BtnFloodAdvert
  {"Flood Advert", "Annuncio Flood", "Flood-Bake", "Annonce Flood", "Rozgłoszenie Flood"},
  // BtnSend
  {"Send", "Invia", "Senden", "Envoyer", "Wyślij"},
  // BtnCanned
  {"Canned", "Rapidi", "Vorlagen", "Rapides", "Szablony"},
  // BtnBack
  {"Back", "Indietro", "Zurück", "Retour", "Wstecz"},
  // BtnContacts
  {"Contacts", "Contatti", "Kontakte", "Contacts", "Kontakty"},
  // BtnDiagnostics
  {"Diagnostics", "Diagnostica", "Diagnose", "Diagnostic", "Diagnostyka"},
  // BtnResetPath
  {"Reset Path (Flood)", "Reset Percorso", "Pfad zurücksetzen", "Réinit. chemin", "Reset trasy (Flood)"},
  // BtnTracePath
  {"Trace Path", "Traccia", "Route prüfen", "Tracer", "Śledź"},
  // BtnTelemetry
  {"Telemetry", "Telemetria", "Telemetrie", "Télémétrie", "Telemetria"},
  // RepeatRoamPreferred
  {"Strongest repeater", "Ripetitore più forte", "Stärkster Repeater", "Répéteur le plus fort", "Najsilniejszy przemiennik"},
  // NoGpsFix
  {"No GPS Fix", "Nessun Fix GPS", "Kein GPS-Fix", "Pas de signal GPS", "Brak pozycji GPS"},
  // ThemeDark
  {"Dark Tactical", "Scuro Tattico", "Dunkel Taktisch", "Sombre tactique", "Ciemny taktyczny"},
  // ThemeOutdoor
  {"Google Light", "Google Chiaro", "Google Hell", "Google Clair", "Jasny (dzień)"},
  // LanguageLabel
  {"Language / Lingua / Sprache", "Lingua Interfaccia", "Sprache / Language", "Langue", "Język interfejsu"},
  // RadioPresetLabel
  {"LoRa Region Preset", "Profilo Radio LoRa", "LoRa Funkprofil", "Profil radio LoRa", "Profil radia LoRa"},
  // DutyCycleLabel
  {"Duty cycle limit 10 %", "Limite duty cycle 10 %", "Sendezeit-Limit 10 %", "Limite cycle 10 %", "Limit czasu nadawania 10 %"},
  // FinishWizard
  {"Finish & Start Mesh", "Completa e Avvia", "Fertig & Starten", "Terminer & Démarrer", "Zakończ i uruchom"}
};
}  // namespace

const char* tr(StrId id, core::Language lang) {
  size_t idx = size_t(id);
  if (idx >= size_t(StrId::_Count)) return "";
  switch (lang) {
    case core::Language::IT: return kCatalog[idx].it;
    case core::Language::DE: return kCatalog[idx].de;
    case core::Language::FR: return kCatalog[idx].fr;
    case core::Language::PL: return kCatalog[idx].pl;
    case core::Language::EN:
    default:                 return kCatalog[idx].en;
  }
}

const char* languageCode(core::Language lang) {
  switch (lang) {
    case core::Language::IT: return "IT";
    case core::Language::DE: return "DE";
    case core::Language::FR: return "FR";
    case core::Language::PL: return "PL";
    case core::Language::EN:
    default:                 return "EN";
  }
}

const char* languageName(core::Language lang) {
  switch (lang) {
    case core::Language::IT: return "Italiano";
    case core::Language::DE: return "Deutsch";
    case core::Language::FR: return "Français";
    case core::Language::PL: return "Polski";
    case core::Language::EN:
    default:                 return "English";
  }
}

}  // namespace faro::ui::i18n
