#include <iostream>
#include <swmgr.h>
#include <swmodule.h>
#include <versekey.h>

using sword::SWMgr;
using sword::SWModule;
using sword::VerseKey;

int main(int argc, char **argv)
{
    if (argc != 3) {
        std::cerr << "Usage: " << argv[0] << " <modname> <\"lookup key\">\n";
        return 1;
    }

    SWMgr manager;
    SWModule *target = manager.getModule(argv[1]);
    if (!target) {
        std::cerr << "Could not find module [" << argv[1] << "].\n";
        return 1;
    }

    VerseKey *vk = dynamic_cast<VerseKey *>(target->getKey());
    if (vk) {
        vk->setText(argv[2]);
    } else {
        target->setKey(argv[2]);
    }

    target->renderText();  // Resolve key to something in the index

    std::cout << "Verse: " << target->getKeyText() << "\n";
    std::cout << "Content: " << target->renderText() << "\n";

    return 0;
}
