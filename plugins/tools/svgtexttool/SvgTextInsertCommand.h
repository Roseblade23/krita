/*
 * SPDX-FileCopyrightText: 2023 Wolthera van Hövell tot Westerflier <griffinvalley@gmail.com>
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 */
#ifndef SVGTEXTINSERTCOMMAND_H
#define SVGTEXTINSERTCOMMAND_H

#include <kundo2command.h>

class KoSvgTextShape;

class SvgTextInsertCommand : public KUndo2Command
{
public:
    SvgTextInsertCommand(KoSvgTextShape *shape, int pos, int anchor, QString text, KUndo2Command *parent = 0);
    ~SvgTextInsertCommand() override = default;

    void redo() override;

    void undo() override;

private:
    KoSvgTextShape *m_shape;

    int m_pos;
    int m_anchor;
    QString m_text;
};

#endif // SVGTEXTINSERTCOMMAND_H
