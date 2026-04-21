#include <Geode/Geode.hpp>
#include <Geode/modify/PlayLayer.hpp>

using namespace geode::prelude;

class $modify(CompanionPlayLayer, PlayLayer) {
    void levelComplete() {
        PlayLayer::levelComplete();

        auto level = PlayLayer::get()->m_level;
        std::string lvName = level->m_levelName;
        std::string lvCreator = level->m_creatorName;

        FLAlertLayer::create("Level complete", "You completed "+ lvName +" by "+ lvCreator+ "! gg", "Nice")->show();
    }
};

$on_mod(Loaded) {
    log::info("Mod chargé i guess");
}