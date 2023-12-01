/* === This file is part of Manjaro's Calamares modules - <https://gitlab.manjaro.org/applications/calamares> ===
 *
 *   SPDX-FileCopyrightText: 2023 Artem Grinev <agrinev@manjaro.org>
 *   SPDX-License-Identifier: GPL-3.0-or-later
 *
 *   Calamares is Free Software: see the License-Identifier above.
 *
 */

#ifndef UTILS_QMLDESKTOPUTILS_H
#define UTILS_QMLDESKTOPUTILS_H

#include <QObject>
#include <QString>
#include <QUrl>
class QQmlEngine;

namespace CalamaresUtils
{
class QmlDesktopUtils : public QObject
{
    Q_OBJECT
public:
    explicit QmlDesktopUtils( QQmlEngine* parent = 0 );

    Q_INVOKABLE void openUrl( const QString& url );
};

}  // namespace CalamaresUtils
#endif