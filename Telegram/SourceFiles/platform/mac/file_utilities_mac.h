/*
This file is part of Telegram Desktop,
the official desktop application for the Telegram messaging service.

For license and copyright information please follow this link:
https://github.com/telegramdesktop/tdesktop/blob/master/LEGAL
*/
#pragma once

#include "platform/platform_file_utilities.h"

namespace Platform {
namespace File {

inline void UnsafeOpenEmailLink(const QString &email) {
	return ::File::internal::UnsafeOpenEmailLinkDefault(email);
}

inline void PostprocessDownloaded(const QString &filepath) {
}

} // namespace File

namespace FileDialog {

inline void InitLastPath() {
	::FileDialog::internal::InitLastPathDefault();
}

inline bool Get(QStringList &files, QByteArray &remoteContent, const QString &caption, const QString &filter, ::FileDialog::internal::Type type, QString startFile) {
	return ::FileDialog::internal::GetDefault(files, remoteContent, caption, filter, type, startFile);
}

} // namespace FileDialog
} // namespace Platform
