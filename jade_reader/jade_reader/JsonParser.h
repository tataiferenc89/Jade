#pragma once
#include "jade_reader.h"
#include "Article.h"
#include <QJsonDocument>
#include <QJsonParseError>
#include <QByteArray>
#include <QJsonObject>
#include <QJsonArray>
#include <QString>

class JsonParser {
public:
  JsonParser();
  ~JsonParser();
  QVector<Article*> parseFromStringToArticleVector(QString content);
};