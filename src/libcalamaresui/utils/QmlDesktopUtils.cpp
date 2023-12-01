/* === This file is part of Manjaro's Calamares modules - <https://gitlab.manjaro.org/applications/calamares> ===
 *
 *   SPDX-FileCopyrightText: 2023 Artem Grinev <agrinev@manjaro.org>
 *   SPDX-License-Identifier: GPL-3.0-or-later
 *
 *   Calamares is Free Software: see the License-Identifier above.
 *
 */

#include "QmlDesktopUtils.h"
#include "utils/Logger.h"

#include <QProcess>
#include <QQmlEngine>

CalamaresUtils::QmlDesktopUtils::QmlDesktopUtils( QQmlEngine* parent )
    : QObject( parent )
{
}
void
CalamaresUtils::QmlDesktopUtils::openUrl( const QString& url )
{
    QProcess::execute(
        QLatin1String( "/usr/bin/sudo" ),
        { QLatin1String( "-u" ), QLatin1String( "#1000" ), QLatin1String( "-E" ), QLatin1String( "xdg-open" ), url } );
}
